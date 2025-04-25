#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		virtual ~A();
};

class B : public Base
{
	public:
		virtual ~B();
};

class C : public Base
{
	public:
		virtual ~C();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);
