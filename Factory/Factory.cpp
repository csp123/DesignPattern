#include "Factory.h"

#include <iostream>
using namespace std;

Factory::Factory(void)
{
	cout<<"Factory..."<<endl;
}


Factory::~Factory(void)
{
	cout<<"~Factory..."<<endl;
}

ConcreteFactory::ConcreteFactory()
{
	cout<<"ConcreteFactory..."<<endl;
}
ConcreteFactory::~ConcreteFactory()
{
	cout<<"~ConcreteFactory..."<<endl;
}
Product* ConcreteFactory::CreateProduct()
{

	return new ConcreteProductA();
}