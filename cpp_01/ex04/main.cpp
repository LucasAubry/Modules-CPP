#include "sed.hpp"

void replace(const std::string& file_name, const std::string& str1, const std::string& str2)
{
    std::size_t find = 0;
    std::string line;

    std::ifstream file(file_name.c_str());
    if (!file)
    {
        std::cout << "erreur" << std::endl;
        return;
    }
    std::ofstream replace_file((file_name + ".replace").c_str());
	//.c_str cast std::string en const char sinon ca compile pas en cpp98
    if (!replace_file)
    {
        std::cout << "erreur replace" << std::endl;
        return;
    }
    while (std::getline(file, line))
    {
        find = 0;
        while ((find = line.find(str1, find)) != std::string::npos)
        {
            for (std::size_t i = 0; i < find; i++) {
                replace_file << line[i];
            }
			replace_file << str2;
			find += str1.size();
		}
		if (find == std::string::npos)
		{
			replace_file << line.substr() << '\n';
		}
    }
    file.close();
    replace_file.close();
    return;
}

int main(int argc, char **argv)
{
    // argv[1] == file name
    // argv[2] == string
    // argv[3] == string
    if (argc != 4)
    {
        std::cout << "no argument" << std::endl;
        return (0);
    }
    replace(argv[1], argv[2], argv[3]);

    return (1);
}

