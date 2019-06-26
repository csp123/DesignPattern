
#include "Visitor.h"

#include <iostream>
using namespace std;
/*************************************************************
问题：在面向对象系统的开发和设计过程，经常会遇到一种情况就是需求变更，经常我们做好的一个设计、
实现了一个系统原型，咱们的客户又会有了新的需求，我们又因此不得不修改已有的设计，最常见就是解决方案就是已经
设计、实现好的类添加新的方法去实现客户新的需求，这样就陷入了设计变更的梦魇，不停的打补丁，其带来的后果就是
设计根本不可能封闭，编译永远都是整个系统代码。
Visitor模式提供了一种解决方案：将更新封装到一个类中，并由更改提供一个接收接口，可达到效果。

**************************************************************/
int main(int argc , char*argv[])
{
	Visitor * vst = new ConcreteVisitorA();
	Element * ele = new ConcreteElementA();
	ele->Accept(vst);

	getchar();
	return 0;
}