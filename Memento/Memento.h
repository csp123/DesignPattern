#pragma once

#include <string>

using namespace std;

typedef string State;

class Memento;
class Originator
{
public:
	Originator();
	Originator(const State &sdt);
	~Originator();
	Memento * CreateMemento();
	void SetMemento(Memento * men);
	void RestoreToMemento(Memento *mt);
	State GetState();
	void SetState(const State &sdt);
	void PrintState();
protected:
private:
	State m_sdt;
	Memento * m_mt; 
};


class Memento
{
private:
	//这是非常关键的地方，将Originator为friend类，可以访问内部信息，
	//但是其他类不能访问
	friend class Originator;
	Memento(void);
	Memento(const State &sdt);
	~Memento(void);
	void SetState(const State & sdt);
	State GetState();
private:
	State m_sdt;
};

