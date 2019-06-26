
#include "Singleton.h"

#include <iostream>
using namespace std;
/*******************************************************************
单例设计模式
********************************************************************/
int main(int argc ,char *argv[])
{
	Singleton * sgn = Singleton::GetInstance();

	sgn->Operator();

	getchar();
	delete sgn;

	getchar();

	return 0;
}