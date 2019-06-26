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
	friend class state; // 表明state类可以访问MyContext类的private字段
	bool ChangeState(State *state);
private:
	State * m_state;
	vector<State*> m_dataBuffer; // 用于存储改变状态前的的对象
};

