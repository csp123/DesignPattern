#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(void)
{
}


Product::~Product(void)
{
}

ConcreteProductA::ConcreteProductA()
{
	cout<<"ConcreteProductA..."<<endl;
}

ConcreteProductA::~ConcreteProductA()
{

}
void ConcreteProductA::Operation()
{
	cout<<"ConcreteProductA do some operation..."<<endl;
}
ConcreteProductB::ConcreteProductB()
{
	cout<<"ConcreteProductB..."<<endl;
}

ConcreteProductB::~ConcreteProductB()
{
	//cout<<""<<endl;
}

void ConcreteProductB::Operation()
{
	cout<<"ConcreteProductB do some operation..."<<endl;
}