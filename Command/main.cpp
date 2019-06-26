

#include <iostream>
#include "command.h"
#include "Reciver.h"
#include "Invoker.h"

using namespace  std;

int main(int argc,char *argv[])
{
	Reciver *recv = new Reciver();
	Command *cmd = new ConcreteCommand(recv);

	Invoker * ivk = new Invoker(cmd);
	ivk->DoInvoker();
	getchar();
	return 0;
}