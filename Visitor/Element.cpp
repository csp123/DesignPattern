#include "Element.h"

#include <iostream>
//using namespace std;

Element::Element(void)
{
}


Element::~Element(void)
{
}

//////////////////////////////////////////////////////////////////////////
//ConcreteElementA
//////////////////////////////////////////////////////////////////////////

ConcreteElementA::ConcreteElementA()
{

}

ConcreteElementA::~ConcreteElementA()
{

}
void ConcreteElementA::Accept(Visitor *vst)
{
	vst->VisitorConcreteElementA(this);
	std::cout<<"visiting ConcreteElementA..."<<std::endl;
}

//////////////////////////////////////////////////////////////////////////
//ConcreteElementB
//////////////////////////////////////////////////////////////////////////

ConcreteElementB::ConcreteElementB()
{

}

ConcreteElementB::~ConcreteElementB()
{

}
void ConcreteElementB::Accept(Visitor *vst)
{
	vst->VisitorConcreteElementB(this);
	std::cout<<"visiting ConcreteElementB..."<<std::endl;
}