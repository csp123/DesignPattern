
#include "Builder.h"
#include "Product.h"
#include "Director.h"

/************************************************************************
��������ϰbuilder
���ߣ�csp
ʱ�䣺20190624
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