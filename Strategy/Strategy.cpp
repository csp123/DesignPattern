#include "Strategy.h"

#include <iostream>
using namespace std;

Strategy::Strategy(void)
{
}


Strategy::~Strategy(void)
{
	cout<<"~Strategy...."<<endl;
}


ConcreteStrategyA::ConcreteStrategyA()
{

}
ConcreteStrategyA::~ConcreteStrategyA()
{
	cout<<"ConcreteStrategyA::~ConcreteStrategyA()...."<<endl;
}
void ConcreteStrategyA::AlgrithmInterface()
{
	cout<<"ConcreteStrategyA::AlgrithmInterface()"<<endl;
}


ConcreteStrategyB::ConcreteStrategyB()
{

}
ConcreteStrategyB::~ConcreteStrategyB()
{
	cout<<"ConcreteStrategyB::~ConcreteStrategyB()...."<<endl;
}
void ConcreteStrategyB::AlgrithmInterface()
{
	cout<<"ConcreteStrategyB::AlgrithmInterface()"<<endl;
}

