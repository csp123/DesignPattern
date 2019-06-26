#pragma once
#include "Subject.h"
#include <string>
using namespace std;

typedef string State;
class Subject;
class Observer
{
public:
	
	virtual ~Observer(void);
	virtual void Update(Subject *sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
	State m_str;
};

class ConcreteObserverA:public Observer
{
public:
	ConcreteObserverA(Subject *sub);
	virtual ~ConcreteObserverA();
	virtual Subject * GetSubject();
	//����Subject��Ϊ����������������һ��View���ڶ����Subject
	void Update(Subject *sub);
	void PrintInfo();

private:
	Subject * m_sub;
};


class ConcreteObserverB:public Observer
{
public:
	ConcreteObserverB(Subject *sub);
	virtual ~ConcreteObserverB();
	virtual Subject * GetSubject();
	//����Subject��Ϊ����������������һ��View���ڶ����Subject
	void Update(Subject *sub);
	void PrintInfo();

private:
	Subject * m_sub;
};