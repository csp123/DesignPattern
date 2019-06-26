#pragma once
#include "mycomponent.h"
#include <vector>
using namespace std;
class Composite :
	public MyComponent
{
public:
	Composite(void);
	~Composite(void);
public:
	void Operator();
	void Add(MyComponent *);
	void Remove(MyComponent *);
	MyComponent *GetChild(int index);
private:
	vector<MyComponent* > m_comVec;
};

