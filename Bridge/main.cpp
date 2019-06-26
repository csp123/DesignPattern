
#include "Abstraction.h"
#include "AbstractionImp.h"

#include <iostream>
using namespace std;

/*

描述：Bridge的优点：
	在Bridge模式的结构中可以看到，系统被分为两个独立的部分，左边是抽象部分，右边是实现部分，这两个部分可以相互独立的进行修改，
例如上面问题的客户需求变化，当用户需求需要Abstraction派生一个具体子类的时候，并不需要像上面通过继承方式实现时候需要添加子类
A1和A2了，另外当上面问题中由于算法添加也只能改变右边实现(添加一个具体化子类)，而右边不用在变化，也不用添加具体子类了。

*/
int main(int argc ,char*argv[])
{

	AbstractionImp *imp = new ConcreteAbstrationImpA();

	Abstraction * abs = new RefinedAbstraction(imp);

	abs->Operator();

	getchar();
	return 0;
}