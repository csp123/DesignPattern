#include "Mediator.h"
#include "Colleage.h"

#include <iostream>
using namespace std;
/***********************************************************
 描述：
在面向对象系统的设计和开发过程中，对象之间的交互和通信是最为常见的情况，因为对象间的交互本身就是通信。

************************************************************/
int main(int argc ,char *argv[])
{
	ConcreteMediator * m = new ConcreteMediator();
	ConcreteColleageA * c1 = new ConcreteColleageA(m);
	ConcreteColleageB * c2 = new ConcreteColleageB(m);

	m->IntroColleage(c1,c2);
	c1->SetState("old");
	c2->SetState("old");
	c1->Action();
	c2->Action();
	cout<<endl;

	c1->SetState("new");
	c1->Action();
	c2->Action();
	cout<<endl;

	c2->SetState("old");
	c2->Action();
	c1->Action();

	getchar();
	return 0;
}