
#include "State.h"
#include "MyContext.h"

#include <iostream>
using namespace std;
/************************************************************************
������ ��ϰState Pattern
	
************************************************************************/
int main(int argc ,char* argv[])
{

	//State *stateA = new ConcreteStateA();
	State *stateB = new ConcreteStateB();
	MyContext * con = new MyContext(stateB);
	con->OperationInterface();
	//con->OperationInterface();
	
	con->OperationChangeState();
	cout<<endl<<"ִ�� �ı�..."<<endl;
	con->OperationInterface();

	cout<<endl<<"ִ�� ɾ��..."<<endl;
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