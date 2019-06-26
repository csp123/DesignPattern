#include "Visitor.h"

#include <iostream>

Visitor::Visitor(void)
{
}


Visitor::~Visitor(void)
{
}

ConcreteVisitorA::ConcreteVisitorA()
{

}
ConcreteVisitorA::~ConcreteVisitorA()
{

}
void ConcreteVisitorA::VisitorConcreteElementA(Element *ele)
{
	std::cout<<"VisitorConcreteElementA..."<<std::endl;
}
void ConcreteVisitorA::VisitorConcreteElementB(Element *ele)
{
	std::cout<<"VisitorConcreteElementB..."<<std::endl;
}

ConcreteVisitorB::ConcreteVisitorB()
{

}

ConcreteVisitorB::~ConcreteVisitorB()
{

}

void ConcreteVisitorB::VisitorConcreteElementA(Element *ele)
{
	std::cout<<"VisitorConcreteElementA..."<<std::endl;
}

void ConcreteVisitorB::VisitorConcreteElementB(Element *ele)
{
	std::cout<<"VisitorConcreteElementB..."<<std::endl;
}