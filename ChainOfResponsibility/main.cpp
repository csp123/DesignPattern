
#include "HHandler.h"

#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	HHandler *h1 = new ConcreteHandlerA();
	HHandler *h2 = new ConcreteHandlerB();

	h1->SetSuccessor(h2);
	h1->HandleRequest();

	getchar();
	return 0;
}