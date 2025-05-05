#include "convertion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "usage: ./convert <literal>" << std::endl;
		return (0);
	}
	else
	{
		ScalarConverter::convert(argv[1]);
		return (0);
	}
}

/*type de cats
	static (compilatiom cast de base, int en float)
	dynamiquc (execution, caste 2 objets)
	reinterpret (compilation bas niveau donc aucun controle int en pointeur par exemple)
	const (peut ajouter/enlever const ou volatile a une variable)
*/
