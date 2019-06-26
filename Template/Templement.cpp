#include "Templement.h"
#include <iostream>
using namespace std;

AbsTemplement::AbsTemplement(void)
{

}

AbsTemplement::~AbsTemplement(void)
{

}

void AbsTemplement::TemplateMethod()
{
	cout<<"........"<<endl;
	this->Primitive1();
	this->Primitive2();
}
//////////////////////////////////////////////////////////////////////////
//ConcreteTemplate1
ConcreteTemplate1::ConcreteTemplate1()
{

}

ConcreteTemplate1::~ConcreteTemplate1()
{

}
//
void ConcreteTemplate1::Primitive1()
{
	cout<<"ConcreteTemplate1::Primitive1()...."<<endl;
}
//
void ConcreteTemplate1::Primitive2()
{
	cout<<" ConcreteTemplate1::Primitive2()...."<<endl;
}


//////////////////////////////////////////////////////////////////////////
//ConcreteTemplate2
ConcreteTemplate2::ConcreteTemplate2()
{

}

ConcreteTemplate2::~ConcreteTemplate2()
{

}


//
void ConcreteTemplate2::Primitive1()
{
	cout<<"ConcreteTemplate2::Primitive1()...."<<endl;
}
//
void ConcreteTemplate2::Primitive2()
{
	cout<<" ConcreteTemplate2::Primitive2()...."<<endl;
}
