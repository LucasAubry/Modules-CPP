int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::ifstream dataBase("data.csv");
		if (!dataBase)//!file.is_open
		{
			std::cout << "data base cant be open" << std::endl;
			return (1);
		}
		std::ifstream file("test.txt");
		if (!file)
		{
		std::cout << "file cant be open" << std::endl;
			return (1);
		}
		Exchange()
	}
	else
	{
		std::cout << "bad argument" << std::endl;
		return (0);
	}
}
