
#include "Singleton.h"

#include <iostream>
using namespace std;
/*******************************************************************
�������ģʽ
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