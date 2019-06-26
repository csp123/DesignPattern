#include "Singleton.h"

#include <iostream>
using namespace std;

#define NULL 0

Singleton * Singleton::m_Ins = NULL;

Singleton::Singleton(void)
{
	cout<<"Singletion..."<<endl;
}


Singleton::~Singleton(void)
{
	cout<<"~Singletion..."<<endl;
}

void Singleton::Operator()
{
	cout<<"Operator..."<<endl;
}
Singleton * Singleton::GetInstance()
{
	if (m_Ins == NULL)
	{
		m_Ins = new Singleton();
	}
	return m_Ins;
}