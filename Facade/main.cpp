
#include "Facade.h"
#include <iostream>
using namespace  std;

/****************************************************************
 ��ϰ��Facadeģʽ

*****************************************************************/
int main(int argc,char *argv[])
{

	Facade* fcd = new Facade();
	fcd->OperatorWrapper();

	getchar();
	delete fcd;
	getchar();
	return 0;
}