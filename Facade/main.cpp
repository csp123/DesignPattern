
#include "Facade.h"
#include <iostream>
using namespace  std;

/****************************************************************
 Á·Ï°£ºFacadeÄ£Ê½

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