
#include "Memento.h"

#include <iostream>
using namespace std;

/*****************************************************************************
	练习：Memeto Pattern
	Memeto Pattern设计模式提供了可以执行撤销的操作，
	让用户可以反悔撤销刚刚的操作
******************************************************************************/
int main(int argc , char * argv[])
{

	Originator *org = new Originator();
	org->SetState("old");
	org->PrintState();
	Memento * m = org->CreateMemento();//将状态备份
	org->SetState("new");//修改状态
	org->PrintState();
	org->RestoreToMemento(m); //恢复到前一个状态
	org->PrintState();
	getchar();
	//delete m;
	getchar();
	return 0;
}