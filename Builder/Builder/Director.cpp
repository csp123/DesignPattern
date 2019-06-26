#include "Director.h"
#include "Builder.h"
#define NULL 0

Director::Director(Builder *bld)
{
	m_bld = bld;
}


Director::~Director(void)
{
}

void Director::Construct()
{
	if (m_bld == NULL)
	{
		return;
	}
	m_bld->BuildPartA("user-defined");
	m_bld->BuildPartB("user-defined");
	m_bld->BuildPartC("user-defined");
}