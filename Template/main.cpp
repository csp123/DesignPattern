
#include "Templement.h"

#include <iostream>
using namespace std;
/*****************************************************************
 Á·Ï°£º templete  pattern
******************************************************************/
int main(int argc ,char *argv[])
{
	
	AbsTemplement * temp1 = new ConcreteTemplate1();
	AbsTemplement * temp2 = new ConcreteTemplate2();

	temp1->TemplateMethod();
	temp2->TemplateMethod();

	getchar();
	return 0;
}