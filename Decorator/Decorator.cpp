#include "Decorator.h"
#include <iostream>
using namespace std;
Component::Component()
{
	cout<<"Component::Component"<<endl;
}
Component::~Component()
{
	cout<<"Component::~Component"<<endl;
}
void Component::Operator()
{
	cout<<"Component::Operator"<<endl;
}
ConcreteComponent::ConcreteComponent()
{
	cout<<"ConcreteComponent::ConcreteComponent"<<endl;
}

ConcreteComponent::~ConcreteComponent()
{
	cout<<"ConcreteComponent::~ConcreteComponent"<<endl;
}
void ConcreteComponent::Operator()
{
	cout<<"ConcreteComponent::Operator() ..." <<endl;
}

Decorator::Decorator(Component *com)
{
	m_com = com;
}


Decorator::~Decorator(void)
{
	delete m_com;
}

void Decorator::Operator()
{
	cout<<"Decorator::Operator"<<endl;
}

ConcreteDecorator::ConcreteDecorator(Component *com):Decorator(com)
{
	cout<<"ConcreteDecorator::ConcreteDecorator..."<<endl;
}
ConcreteDecorator::~ConcreteDecorator()
{
	cout<<"ConcreteDecorator::~ConcreteDecorator..."<<endl;
}

void ConcreteDecorator::AddedBehavior()
{
	cout<<"AddedBehavior..."<<endl;
}

void ConcreteDecorator::Operator()
{

	m_com->Operator();
	this->AddedBehavior();
}