#include "sed.hpp"

int	verif_openfile(std::fstream& outputFile, std::string outputName)
{
	outputFile.open(outputName.c_str(), std::fstream::out | std::fstream::trunc);//combinaison de fs
	//out = ecriture
	//trunc = vider le fichier existant des louverture
	//app = si le fichier exite pas le cree
	if (!outputFile)
	{
		std::cout << "Error opening file " << outputName << "\n";
		return (0);
	}
	outputFile.close();

	outputFile.open(outputName.c_str(), std::fstream::out | std::fstream::app);
	if (!outputFile)
	{
		std::cout << "Error opening file " << outputName << "\n";
		return (0);
	}
	return (1);
}

std::string	replace_by_s2(std::string current_line, std::string s1, std::string s2)
{
	size_t	len_s1 = s1.length();
	for (size_t i = 0; i < current_line.length(); i++)
	{
		if (current_line[i] == s1[0] && !current_line.compare(i, len_s1, s1))
		{
			current_line.erase(i, len_s1);//supp len_s1 (nbr de char) a la position i
			current_line.insert(i, s2);//add s2 a la position i
			i += s2.length();//aller apres taille de s2
		}
	}
	return (current_line);
}

void	replace(std::fstream &inputFile, std::string outputName, \
	std::string s1, std::string s2)
{
	std::fstream	outputFile;
	std::string		current_line = "";
	outputName += ".replace";
	int	number_of_lines = 0;

	if (verif_openfile(outputFile, outputName) == 1)
	{
		while (std::getline(inputFile, current_line, '\0'))
		{
			if (!current_line.empty() && number_of_lines++)
				outputFile << std::endl;
			current_line = replace_by_s2(current_line, s1, s2);
			outputFile << current_line;
		}
		outputFile.close();
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::fstream	inputFile;
		inputFile.open(argv[1], std::fstream::in);
		if (inputFile)
		{
			std::cout << "Error opening file " << argv[1] << std::endl;
			return (0);
		}
		replace(inputFile, argv[1], argv[2], argv[3]);
		inputFile.close();
	}
	else
		std::cout << "bad args" << std::endl;
}
