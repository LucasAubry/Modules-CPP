#include "BitcoinExchange.hpp"

bool verif_before(const std::string& before)
{
//    if (before.size() != 10)
//	{
//        return false;
//	}

    if (before[4] != '-' || before[7] != '-')
	{
		std::cout << "need '-'" << std::endl;
        return false;
	}

    std::string yearStr = before.substr(0, 4);
    std::string monthStr = before.substr(5, 2);
    std::string dayStr = before.substr(8, 2);

    for (size_t i = 0; i < 4; ++i)
        if (!isdigit(yearStr[i]))
		{
			std::cout << "the years is not a number" << std::endl;
            return false;
		}
    for (size_t i = 0; i < 2; ++i)
        if (!isdigit(monthStr[i]) || !isdigit(dayStr[i]))
		{
			std::cout << "the month or the days is not a number" << std::endl;
            return false;
		}

    int year = std::atoi(yearStr.c_str());
    int month = std::atoi(monthStr.c_str());
    int day = std::atoi(dayStr.c_str());

    if (year < 0 || year > 9999)
	{
		std::cout << "the years are too big or too small" << std::endl;
        return false;
	}
    if (month < 1 || month > 12)
	{
		std::cout << "the month are too big or too small" << std::endl;
        return false;
	}
    if (day < 1 || day > 31)
	{
		std::cout << "the days are too big or too small" << std::endl;
        return false;
	}

    return true;
}

bool verif_after(const std::string& after)//verif la valeur
{
	std::istringstream iss(after);
	float value;
	char reste;

	if (!(iss >> value)) //tante d le lire en float
	{
		std::cout << "not a number" << std::endl;
		return false;
	}

	if (iss >> reste) //check quil ny a rien apres
	{
		std::cout << "there must be only numbers" << std::endl;
		return false;
	}

	if (value < 0.0f || value > 1000.0f)
	{
		std::cout << "the value are too big or too small" << std::endl;
		return false;
	}

	return true;
}

std::string trim(const std::string& str)
{
	size_t start = str.find_first_not_of(" \t");
	size_t end = str.find_last_not_of(" \t");
	return (start == std::string::npos) ? "" : str.substr(start, end - start + 1);
}

bool verif_file(std::ifstream& file) //FAUT VERIF SI LE FILE EST VIDE
{
	std::string line;
	while (std::getline(file, line))
	{
		size_t pipePos = line.find('|');

		if (pipePos != std::string::npos)
		{
			std::string before = trim(line.substr(0, pipePos));
			std::string after = trim(line.substr(pipePos + 1));

			if (!before.empty() && !after.empty())
			{
				if (!verif_before(before))
					return false;
				if (!verif_after(after))
					return false;
			}
			else
				std::cout << "the line is not complete" << std::endl;
		}
		else
		{
			std::cout << "not pipe found in line: " << line << std::endl;
			return false;
		}
	}
	return true;
}

int main(int ac, char** av)
{
	if (ac == 2)
	{
		std::ifstream dataBase("data.csv");
		if (!dataBase)//!file.is_open
		{
			std::cout << "data base cant be open" << std::endl;
			return (1);
		}
		std::ifstream file(av[1]);
		if (!file)
		{
		std::cout << "file cant be open" << std::endl;
			return (1);
		}
		else if (verif_file(file))
			std::cout << "oui" << std::endl; //chercher dans la database les date et afficher les value et les dates
		BitcoinExchange::Exchange(dataBase);
	}
	else
	{
		std::cout << "bad argument" << std::endl;
		return (0);
	}
//	dataBase.close();
//	file.close();
}
