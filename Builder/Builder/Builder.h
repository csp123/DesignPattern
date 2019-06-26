#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product;
class Builder
{
public:
	virtual ~Builder(void);
	virtual void BuildPartA(const string &buildParam) = 0;
	virtual void BuildPartB(const string &buildParam) = 0;
	virtual void BuildPartC(const string &buildParam) = 0;
	virtual Product* GetProduct() = 0;
protected:
	Builder();
private:
};

class ConcreteBuilder:public Builder
{
public:
	void BuildPartA(const string &buildParam);
	void BuildPartB(const string &buildParam);
	void BuildPartC(const string &buildParam);
	Product* GetProduct();
protected:
private:
};