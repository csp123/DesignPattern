#pragma once
#include "Colleage.h"
#include <string>
using namespace std;

class Colleage;

class Mediator
{
public:	
	virtual ~Mediator(void);
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;
protected:
	Mediator(void);
};

class ConcreteMediator : public Mediator
{
public:
	ConcreteMediator();
	ConcreteMediator(Colleage *clgA,Colleage * clgB);
	~ConcreteMediator();
	void SetConcreteColleageA(Colleage *clgA);
	void SetConcreteColleageB(Colleage *clgB);

	Colleage * GetConcreteColleageA();
	Colleage * GetConcreteColleageB();
	void IntroColleage(Colleage *clgA,Colleage *clgB);
	void DoActionFromAtoB();
	void DoActionFromBtoA();
protected:
private:
	Colleage *m_clgA;
	Colleage *m_clgB;
};