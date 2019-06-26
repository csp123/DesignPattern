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
	//���Ƿǳ��ؼ��ĵط�����OriginatorΪfriend�࣬���Է����ڲ���Ϣ��
	//���������಻�ܷ���
	friend class Originator;
	Memento(void);
	Memento(const State &sdt);
	~Memento(void);
	void SetState(const State & sdt);
	State GetState();
private:
	State m_sdt;
};

