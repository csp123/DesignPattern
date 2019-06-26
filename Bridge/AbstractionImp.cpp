#include "AbstractionImp.h"

#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp(void)
{
}


AbstractionImp::~AbstractionImp(void)
{
}

void AbstractionImp::Operator()
{
	cout<<"AbstractionImp ... imp" <<endl;
}

ConcreteAbstrationImpA::ConcreteAbstrationImpA()
{

}
ConcreteAbstrationImpA::~ConcreteAbstrationImpA()
{

}
void ConcreteAbstrationImpA::Operator()
{
	cout<<"ConcreteAbstrationImpA..."<<endl;
}
ConcreteAbstrationImpB::ConcreteAbstrationImpB()
{

}
ConcreteAbstrationImpB::~ConcreteAbstrationImpB()
{

}

void ConcreteAbstrationImpB::Operator()
{
	cout<<"ConcreteAbstrationImpB..."<<endl;
}