#include "Prototype.h"

using namespace std;
Prototype::Prototype(void)
{
	cout<<"Prototype"<<endl;
}


Prototype::~Prototype(void)
{
	cout<<"~Prototype..."<<endl;
}

Prototype *Prototype::Clone() const
{	
	cout<<"Prototype->Clone"<<endl;
	return 0;
}

//////////////////////////////////////////////////////////////////////////

ConcretePrototype::ConcretePrototype()
{
	cout<<"ConcretePrototype"<<endl;
}
ConcretePrototype::ConcretePrototype(const ConcretePrototype &cp)
{
	cout<<"ConcretePrototype copy..."<<endl;
}
ConcretePrototype::~ConcretePrototype()
{
	cout<<"~ConcretePrototype..."<<endl;
}
Prototype *ConcretePrototype::Clone() const
{
	return new ConcretePrototype(*this);
}