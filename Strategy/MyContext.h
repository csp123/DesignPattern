#pragma once
#include "Strategy.h"
class Strategy;

class MyContext
{
public:

	MyContext(Strategy* stg);
	~MyContext(void);
	void DoAction();
protected:
private:
	Strategy *m_stg;
};

