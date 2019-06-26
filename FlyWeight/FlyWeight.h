#pragma once
#include <iostream>
#include <string>
using namespace std;
class FlyWeight
{
public:
	
	virtual ~FlyWeight(void);
	virtual void Operation(const string &extrinsicState);
	string GetIntrinsicState();
protected:
	FlyWeight(string intrinsicState);
private:
	string _intrinsticState;
};

class ConcreteFlyWeight: public FlyWeight
{
public:
	ConcreteFlyWeight(string intrinsicState);
	~ConcreteFlyWeight();
	void Operation(const string &extrinsicState);
protected:
private:
};
