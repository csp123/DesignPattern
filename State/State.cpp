#include "State.h"
#include <iostream>
using namespace std;

State::State(void)
{
}


State::~State(void)
{
	cout<<"~State(void)"<<endl;
}
bool State::ChangeState(MyContext *con,State *state)
{
	con->ChangeState(state);
	return true;
}
void State::OperationInterface(MyContext *con)
{
	cout<<"State::OperationInterface"<<endl;
}

//////////////////////////////////////////////////////////////////////////
//ConcreteStateA
//////////////////////////////////////////////////////////////////////////
ConcreteStateA::ConcreteStateA()
{

}

ConcreteStateA::~ConcreteStateA()
{
	cout<<"~ConcreteStateA(void)"<<endl;
}

void ConcreteStateA::OperationChangeState(MyContext * con)
{
	OperationInterface(con);
	this->ChangeState(con,new ConcreteStateB());
}

void ConcreteStateA::OperationInterface(MyContext *con)
{
	cout<<"ConcreteStateA::OperationInterface..."<<endl;
}

//////////////////////////////////////////////////////////////////////////
//ConcreteStateB
//////////////////////////////////////////////////////////////////////////

ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{
	cout<<"~ConcreteStateB(void)"<<endl;
}

void ConcreteStateB::OperationChangeState(MyContext *con)
{
	//cout<<""<<endl;
	OperationInterface(con);
	this->ChangeState(con,new ConcreteStateA());
}

void ConcreteStateB::OperationInterface(MyContext *con)
{
	cout<<"ConcreteStateB::OperationInterface..."<<endl;
}