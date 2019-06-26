#include "command.h"
#include <iostream>
using namespace std;
Command::Command(void)
{
}


Command::~Command(void)
{

}



ConcreteCommand::~ConcreteCommand()
{

}
ConcreteCommand::ConcreteCommand(Reciver *rev)
{
	m_recv = rev;
}
void ConcreteCommand::Execute()
{
	//std::cout<<"Execute..."<<std::endl;
	m_recv->Action();
}