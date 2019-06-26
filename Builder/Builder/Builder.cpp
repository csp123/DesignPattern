#include "Builder.h"
#include "Product.h"

Builder::Builder(void)
{
}


Builder::~Builder(void)
{
}

//ConcreteBuilder::ConcreteBuilder()
//{
//
//}
//ConcreteBuilder::~ConcreteBuilder()
//{
//
//}

void ConcreteBuilder::BuildPartA(const string &buildParam)
{
	cout<<"step 1 Build PartA..."<<buildParam<<endl;
}
void ConcreteBuilder::BuildPartB(const string &buildParam)
{
	cout<<"step 1 Build PartB..."<<buildParam<<endl;
}
void ConcreteBuilder::BuildPartC(const string &buildParam)
{
	cout<<"step 1 Build PartC..."<<buildParam<<endl;
}
Product* ConcreteBuilder::GetProduct()
{
	BuildPartA("pre-defined");
	BuildPartB("pre-defined");
	BuildPartC("pre-defined");
	return new Product();
}