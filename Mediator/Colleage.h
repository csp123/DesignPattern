#pragma once
#include <iostream>
#include <string>
#include "Mediator.h"

using namespace std;


class Mediator;

class Colleage
{
public:

	virtual ~Colleage(void);
	virtual void Action() = 0;
	virtual void SetState(const string &sdt) = 0;
	virtual string GetState() = 0;
protected:
	Colleage(void);
	Colleage(Mediator *mdt);
	Mediator * m_dt;
private:
};

class ConcreteColleageA:public Colleage
{
public:
	ConcreteColleageA();
	ConcreteColleageA(Mediator *mdt);
	~ConcreteColleageA();
	void Action();
	void SetState(const string &sdt);
	string GetState();
private:
	string m_sdt;
};

class ConcreteColleageB:public Colleage
{
public:
	ConcreteColleageB();
	ConcreteColleageB(Mediator *mdt);
	~ConcreteColleageB();
	void Action();
	void SetState(const string &sdt);
	string GetState();
private:
	string m_sdt;
};

