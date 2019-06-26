#include "AbstractFactory.h"
#include <iostream>
using namespace std;

AbstractFactory::AbstractFactory(void)
{
}


AbstractFactory::~AbstractFactory(void)
{
	cout<<"~AbstractFactory"<<endl;
}

//////////////////////////////////////////////////////////////////////////
//ConcreteFactory1
//////////////////////////////////////////////////////////////////////////
ConcreteFactory1::ConcreteFactory1()
{

}
ConcreteFactory1::~ConcreteFactory1()
{
	cout<<"~ConcreteFactory1"<<endl;
}

AbstractProductA * ConcreteFactory1::CreateProductA()
{
	return new ConcreteProductA1();
}
AbstractProductB * ConcreteFactory1::CreateProductB()
{
	return new ConcreteProductB1();
}

//////////////////////////////////////////////////////////////////////////
//ConcreteFactory2
//////////////////////////////////////////////////////////////////////////

AbstractProductA * ConcreteFactory2::CreateProductA()
{
	return new ConcreteProductA2();
}
AbstractProductB * ConcreteFactory2::CreateProductB()
{
	return new ConcreteProductB2();
}

ConcreteFactory2::ConcreteFactory2()
{

}
ConcreteFactory2::~ConcreteFactory2()
{
	cout<<"~ConcreteFactory2"<<endl;
}