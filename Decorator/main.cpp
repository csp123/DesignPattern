
#include "Decorator.h"

#include <iostream>
using namespace std;

int main(int argc ,char* argv[])
{
	Component *com = new ConcreteComponent();
	Decorator * dec= new ConcreteDecorator(com);
	dec->Operator();

	getchar();
	delete dec;
	getchar();
	return 0;
}