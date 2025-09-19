#include "BitcoinExchange.hpp"
#include <cctype>

BitcoinExchange::BitcoinExchange() { put_data_to_map(); }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		_data = other._data;
	return *this;
}

double ft_stod(std::string const &str)
{
	std::stringstream ss(str);
	double d;
	ss >> d;
	return d;
	// aucune fonction ne convertie string en double en C++98
	// donc on utilise un flux pour faire la conversion
}

bool isValidDate(const std::string &date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	for (size_t i = 0; i < date.size(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return false;
	}

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (year < 2009) // bitcoin existe pas avant 2009
		return false;

	if (month < 1 || month > 12)
		return false;

	int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	//anee bixe
	bool leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
	if (leap)
		daysInMonth[1] = 29;

	if (day < 1 || day > daysInMonth[month - 1])
		return false;

	return true;
}

void BitcoinExchange::put_data_to_map()
{
	std::ifstream file("data.csv");
	std::string line;
	std::size_t size;
	std::getline(file, line); // skip header
	while (std::getline(file, line))
	{
		size = line.find(",");
		this->_data[line.substr(0, size)] = ft_stod(line.substr(size + 1));
	}
}

int TooLargeNumber(std::string const &value)
{
	if (std::string::npos != value.find("."))
		return 1;

	double d_value = ft_stod(value);
	std::stringstream stream;
	stream << d_value;

	std::string conv = stream.str();
	if (value != conv)
		return 0;
	return 1;

	// la conversion entre stream >> string arrondit si le chiffre
	// est trop grand donc si overflow -> arrondi -> on le détecte
}

void print_convert(std::string date, double d_value, double conv)
{
	std::cout << date << " => " << d_value << " = " << conv << std::endl;
}

double BitcoinExchange::find_value(std::string date, double value)
{
	if (this->_data[date])
		return this->_data[date] * value;

	std::map<std::string, double>::iterator it = this->_data.upper_bound(date);
	//avoir la lpus proche de data 10 {11} 12  = 12
	if (it != this->_data.begin())
		it--;

	while (!it->second) // recule tant que pas de valeur > 0
	{
		if (it == this->_data.begin())
			return 0;
		it--;
	}
	return it->second * value; // prix unitaire * quantité
}

void BitcoinExchange::parseInput(std::ifstream &file)
{
	std::string line;
	std::getline(file, line); // skip header

	while (std::getline(file, line))
	{
		size_t size = line.find(" | ");
		if (size == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}

		std::string date = line.substr(0, size);
		std::string value = line.substr(size + 3);

		if (date.empty() || value.empty())
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}

		// Vérification de la date
		if (!isValidDate(date))
		{
			std::cout << "Error: bad date => " << date << std::endl;
			continue;
		}

		double d_value = ft_stod(value);

		if (d_value < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}

		if (!TooLargeNumber(value))
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}

		double conv = this->find_value(date, d_value);
		print_convert(date, d_value, conv);
	}
}

