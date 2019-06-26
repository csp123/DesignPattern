
#include "Memento.h"

#include <iostream>
using namespace std;

/*****************************************************************************
	��ϰ��Memeto Pattern
	Memeto Pattern���ģʽ�ṩ�˿���ִ�г����Ĳ�����
	���û����Է��ڳ����ոյĲ���
******************************************************************************/
int main(int argc , char * argv[])
{

	Originator *org = new Originator();
	org->SetState("old");
	org->PrintState();
	Memento * m = org->CreateMemento();//��״̬����
	org->SetState("new");//�޸�״̬
	org->PrintState();
	org->RestoreToMemento(m); //�ָ���ǰһ��״̬
	org->PrintState();
	getchar();
	//delete m;
	getchar();
	return 0;
}