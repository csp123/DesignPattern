#pragma once
#include "Product.h"

class Factory
{
public:	
	virtual ~Factory(void);
	virtual Product* CreateProduct() = 0;
protected:
	Factory(void);
};

class ConcreteFactory:public Factory
{
public:
	ConcreteFactory();
	~ConcreteFactory();
	Product* CreateProduct();
};

