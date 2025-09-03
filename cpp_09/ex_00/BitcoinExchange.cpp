#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {put_data_to_map();}
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
//	//aucune fonction ne convertie string en double;
//	//on met la chaine dans un flux et on extrait un double depuis ce flux
//	//parce quil est surcharger par >> <<
}


void BitcoinExchange::put_data_to_map()
{
	std::ifstream file("data.csv");
	std::string line;
	std::size_t size;
	std::getline(file, line);
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

	//la convertion entre stream >> string arrondi si le chiffre
	//et trop grand ronc si ya overflow
	//ensuite on verifie ducoup si il a etais arondi
}


void print_convert(std::string date, double d_value, double conv)
{
	std::cout << date << " => " << d_value << " = " << conv << std::endl;
}


void BitcoinExchange::parseInput(std::ifstream &file)
{
	std::string line;
	std::getline(file, line);

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


double BitcoinExchange::find_value(std::string date, double value)
{
	if (this->_data[date])
		return this->_data[date] *value;
	std::map<std::string, double>::iterator it = this->_data.upper_bound(date);//upper.bound pour trouber la value la plus proche de date
	it--;
	while (!it->second)//on recule jusqau debut jusqua trouver une value au dessu de 0
	{
		if (it == this->_data.begin())//si on a attein le debut
			return 0;
		it--;
	}
	return it->second * value;//prix unitaire x valeur = total euros
}


