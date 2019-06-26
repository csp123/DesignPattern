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
	//�ȴ�������Ѱ��FlyWeight
	for (; it != iend ; it++)
	{
		if ((*it)->GetIntrinsicState() == key)
		{
			cout<<"find ..."<<key<<endl;
			return *it;
		}
	}
	//��������δ�ҵ��´���һ������
	FlyWeight * fn = new ConcreteFlyWeight(key);
	_fly.push_back(fn);

	return fn;
}