#include "Abstraction.h"

#include "AbstractionImp.h"
#include <iostream>
using namespace std;

Abstraction::Abstraction(void)
{
}


Abstraction::~Abstraction(void)
{
}

RefinedAbstraction::RefinedAbstraction(AbstractionImp *imp)
{
	m_imp = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{

}
void RefinedAbstraction::Operator()
{
	m_imp->Operator();
}