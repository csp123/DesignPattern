
#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;
/**************************************************************************
Factory最重要的两个功能：
1、定义了创建对象的接口，封装了对象的创建；
2、是的具体化类的工作延迟到了子类中。
***************************************************************************/
int main(int argc , char * argv[])
{
	Factory *fcy = new ConcreteFactory();

	Product *pdt = fcy->CreateProduct();

	getchar();
	pdt->Operation();
	delete pdt;
	delete fcy;

	getchar();

	return 0;
}