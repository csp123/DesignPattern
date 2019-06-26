#pragma once
#include "FlyWeight.h"
#include <vector>

class FlyWeightFactory
{
public:
	FlyWeightFactory(void);
	~FlyWeightFactory(void);
	FlyWeight * GetFlyWeight(const string& key);
private:
	vector<FlyWeight *> _fly;
};

