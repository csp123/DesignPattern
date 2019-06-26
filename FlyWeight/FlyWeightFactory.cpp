#include "FlyWeightFactory.h"


FlyWeightFactory::FlyWeightFactory(void)
{
}


FlyWeightFactory::~FlyWeightFactory(void)
{
}

FlyWeight * FlyWeightFactory::GetFlyWeight(const string& key)
{
	vector<FlyWeight *>::iterator it = _fly.begin();
	vector<FlyWeight *>::iterator iend = _fly.end();
	//先从容器中寻找FlyWeight
	for (; it != iend ; it++)
	{
		if ((*it)->GetIntrinsicState() == key)
		{
			cout<<"find ..."<<key<<endl;
			return *it;
		}
	}
	//在容器中未找到新创建一个对象
	FlyWeight * fn = new ConcreteFlyWeight(key);
	_fly.push_back(fn);

	return fn;
}