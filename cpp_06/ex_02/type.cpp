#include "type.hpp"

Base::~Base() {}
A::~A() {}
B::~B() {}
C::~C() {}


Base *generate(void)
{
	int i = std::rand() % 3;
	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)//retourn A* si p point vers A sinon retourne null
		std::cout << "the type is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "the type is B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "the type is C" << std::endl;
	else
		std::cout << "the type is unknown" << std::endl;
}

void identify(Base& p)
{
	try
	{
		static_cast<void>(dynamic_cast<const A &>(p)); //meme principe juste la le static_cats sert a metre en voide pour ne pas utiliser le cast quon a fais comme (void)i
		std::cout << "the type is A" << std::endl;
		return ;
	}
	catch (std::exception &e){} //quand ya un erreur le dynamic cast throw bad_cast
	
	try
	{
		static_cast<void>(dynamic_cast<const B &>(p));
		std::cout << "the type is B" << std::endl;
		return ;	
	}
	catch (std::exception &e) {}

	try
	{
		static_cast<void>(dynamic_cast<const C &>(p));
		std::cout << "the type is C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	std::cout << "the type is unknow" << std::endl;
}
