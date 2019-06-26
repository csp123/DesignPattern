#include "FlyWeightFactory.h"
#include <iostream>
using namespace std;

/************************************************************************
 *	练习：FlyWeight pattern
 *	作者：csp
 *	时间：20190625
************************************************************************/

int main(int argc ,char *argv[])
{

	FlyWeightFactory *fc = new FlyWeightFactory();
	FlyWeight* fw1 = fc->GetFlyWeight("Hello");
	
	FlyWeight* fw2 = fc->GetFlyWeight("world");
	FlyWeight* fw3 = fc->GetFlyWeight("Hello");
	fw1->Operation("Liming");
	fw2->Operation("Xiaoming");
	fw3->Operation("Zhaoxia");
	getchar();
	return 0;
}