
#include "State.h"
#include "MyContext.h"

#include <iostream>
using namespace std;
/************************************************************************
ÃèÊö£º Á·Ï°State Pattern
	
************************************************************************/
int main(int argc ,char* argv[])
{

	//State *stateA = new ConcreteStateA();
	State *stateB = new ConcreteStateB();
	MyContext * con = new MyContext(stateB);
	con->OperationInterface();
	//con->OperationInterface();
	
	con->OperationChangeState();
	cout<<endl<<"Ö´ÐÐ ¸Ä±ä..."<<endl;
	con->OperationInterface();

	cout<<endl<<"Ö´ÐÐ É¾³ý..."<<endl;
	if (con != NULL)
	{
		delete con;
	}
	//if (stateA != NULL)
	//{
	//	delete stateA;
	//}
	getchar();
	return 0;
}