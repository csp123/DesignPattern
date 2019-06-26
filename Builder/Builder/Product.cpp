#include "Product.h"


Product::Product(void)
{
}


Product::~Product(void)
{
}

ProductPart::ProductPart()
{

}
ProductPart::~ProductPart()
{

}

ProductPart * ProductPart::BuildPart()
{
	return this;
}
