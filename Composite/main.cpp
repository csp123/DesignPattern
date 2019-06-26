
#include "MyComponent.h"
#include "Composite.h"

#include "Leaf.h"

#include <iostream>

using namespace std;

/*
	描述：练习Composite模式

*/
template<typename T>
void print(vector<T> &vec);

#define t(a,b) a##b  //## 表示连接
#define s(y) #y		 //

int main(int argc ,char *argv[])
{
	Leaf * mleaf = new Leaf();
	mleaf->Operator();
	Composite *com = new Composite();
	com->Add(mleaf);
	com->Operator();
	MyComponent * myCom = com->GetChild(0);
	myCom->Operator();
	getchar();

	//vector<int> iVec;
	//iVec.push_back(1);
	//iVec.push_back(2);
	//iVec.push_back(3);
	//iVec.push_back(4);

	//iVec.erase(iVec.begin() + 1);

	//cout<<t(1)<<endl;
	//cout<<s(hello)<<endl;
	getchar();
	return 0 ;
}

template<typename T>
void print(vector<T> &vec)
{
	vector<T>::iterator iBegin = vec.begin();
	vector<T>::iterator iEnd   = vec.end();
	for (; iBegin != iEnd ; iBegin++)
	{
		printf("%d ",*iBegin);
	}
}