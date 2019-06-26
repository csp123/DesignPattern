#include "AbstractProduct.h"

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//AbstractProductA
//////////////////////////////////////////////////////////////////////////
AbstractProductA::AbstractProductA(void)
{
}


AbstractProductA::~AbstractProductA(void)
{
}


//////////////////////////////////////////////////////////////////////////
//AbstractProductB
//////////////////////////////////////////////////////////////////////////
AbstractProductB::AbstractProductB(void)
{
}


AbstractProductB::~AbstractProductB(void)
{
}



//////////////////////////////////////////////////////////////////////////
//ConcreteProductA1
//////////////////////////////////////////////////////////////////////////
ConcreteProductA1::ConcreteProductA1()
{
	cout<<"ConcreteProductA1::constructor..."<<endl;
}
ConcreteProductA1::~ConcreteProductA1()
{

}
void ConcreteProductA1::Operator()
{
	cout<<"ConcreteProductA1::Operator..."<<endl;
}
//////////////////////////////////////////////////////////////////////////
//ConcreteProductA2
//////////////////////////////////////////////////////////////////////////

ConcreteProductA2::ConcreteProductA2()
{
	cout<<"ConcreteProduct2::Constructor..."<<endl;
}
ConcreteProductA2::~ConcreteProductA2()
{

}
void ConcreteProductA2::Operator()
{
	cout<<"ConcreteProductA2::Operator..."<<endl;
}

//////////////////////////////////////////////////////////////////////////
//ConcreteProductB1
//////////////////////////////////////////////////////////////////////////

ConcreteProductB1::ConcreteProductB1()
{
	cout<<"ConcreteProductB1::constructor..."<<endl;
}
ConcreteProductB1::~ConcreteProductB1()
{

}
void ConcreteProductB1::Operator()
{
	cout<<"ConcreteProductB1::Operator..."<<endl;
}

//////////////////////////////////////////////////////////////////////////
//ConcreteProductB2
//////////////////////////////////////////////////////////////////////////

ConcreteProductB2::ConcreteProductB2()
{
	cout<<"ConcreteProductB2::constructor..."<<endl;
}
ConcreteProductB2::~ConcreteProductB2()
{

}
void ConcreteProductB2::Operator()
{
	cout<<"ConcreteProductB2::Operator..."<<endl;
}