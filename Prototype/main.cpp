
#include "Prototype.h"
#include <iostream>
using namespace std;
/**************************************************************************
描述：Protype 模式提供了一个通过已存在的对象进行新对象创建的接口(Clone)，Clone()实现
	  和具体的实现语言相关，在C++中我们通过拷贝构造函数实现。
作者：csp
时间：20190624
***************************************************************************/
int main(int argc ,char*argv[])
{

	Prototype *p = new ConcretePrototype();
	//调用派生类的拷贝构造函数，在派生类再次实例化时回调用基类的构造函数，和拷贝构造函数
	//因此会在输出结果中看见其执行了基类的构造函数和派生类的拷贝构造函数
	Prototype *p1 = p->Clone(); 

	getchar();
	delete p ;
	delete p1;
	getchar();
	//ConcretePrototype* p2 = new ConcretePrototype();
	//getchar();
	//delete p2;
	//getchar();
	Prototype *p2; //声明指针的时候是不会调用其构造函数的
	getchar();
	return 0;
}