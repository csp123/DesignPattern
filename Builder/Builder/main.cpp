
#include "Builder.h"
#include "Product.h"
#include "Director.h"

/************************************************************************
描述：练习builder
作者：csp
时间：20190624
************************************************************************/
int main(int argc ,char *argv[])
{
	Director * d = new Director(new ConcreteBuilder());
	
	d->Construct();
	getchar();
	delete d;
	getchar();
	return 0;
}