
#include "AbstractFactory.h"
#include "AbstractProduct.h"

#include <iostream>

using namespace std;

int main(int argc ,char *argv[])
{
	AbstractFactory * cf1 = new ConcreteFactory1();

	cf1->CreateProductA();
	cf1->CreateProductB();
	AbstractFactory * cf2 = new ConcreteFactory2();

	cf2->CreateProductA();
	cf2->CreateProductB();

	getchar();
	delete cf2;
	delete cf1;
	getchar();
	return 0;
}