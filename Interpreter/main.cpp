
#include "myContext.h"
#include "Interpreter.h"

#include <iostream>
using namespace std;
/*********************************************************************
问题描述：
	一些应用提供了内建(build-in)的脚本或者宏语言让用户可以定义他们能够在系统中进行的操作，
	Interpretor模式的目的就是使用一个解释器为用户提供一个一门定义语言的语法表示的解释器，
	然后通过这个解释器来解释语言中的句子。
**********************************************************************/

int main(int argc,char* argv[])
{
	myContext *ctx = new myContext();
	AbstractExpression *te = new TerminalExpression("hello");
	AbstractExpression *nte = new NonterminalExpression(te,2);

	nte->Interpret(*ctx);
	getchar();

	return 0;
}