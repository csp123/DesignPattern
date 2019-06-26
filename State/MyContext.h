#pragma once
#include "State.h"
#include <iostream>
#include <vector>
using namespace std;

class State;
class MyContext
{
public:
	MyContext(void);
	~MyContext(void);
	MyContext(State *state);
public:
	
	void OperationInterface();
	void OperationChangeState();
public:
	friend class state; // ����state����Է���MyContext���private�ֶ�
	bool ChangeState(State *state);
private:
	State * m_state;
	vector<State*> m_dataBuffer; // ���ڴ洢�ı�״̬ǰ�ĵĶ���
};

