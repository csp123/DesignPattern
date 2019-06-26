#pragma once
class Product
{
public:
	Product();
	~Product();
	void ProducePart();
protected:
private:
};

class ProductPart
{
public:
	ProductPart();
	~ProductPart();
	ProductPart * BuildPart();
protected:
private:
};