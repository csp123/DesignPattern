
#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;
/**************************************************************************
Factory����Ҫ���������ܣ�
1�������˴�������Ľӿڣ���װ�˶���Ĵ�����
2���ǵľ��廯��Ĺ����ӳٵ��������С�
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