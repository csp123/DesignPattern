#pragma once
#include "Observer.h"
#include <iostream>

#include <string>
#include <list>
using namespace std;

typedef string State;

class Observer;
class Subject
{
public:
	
	virtual ~Subject(void);
	virtual void Attach(Observer *obv);
	virtual void Detach(Observer *obv);
	virtual void Notify();
	virtual void SetState(State m_state) = 0;
	virtual State GetState() = 0;
protected:
	Subject(void);
private:
	list<Observer *> m_list;
	
};


class ConcreteSubject:public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();	

	State GetState();
	void SetState(State state);
protected:
private:	
	State m_state;
};
