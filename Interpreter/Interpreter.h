#pragma once

#include "myContext.h"
#include <string>
#include <iostream>
using namespace std;

class AbstractExpression
{
public:
	virtual ~AbstractExpression();
	virtual void Interpret(const myContext &ctxt);
protected:
	AbstractExpression();
};


class TerminalExpression:public AbstractExpression
{
public:
	TerminalExpression(const string &state);
	~TerminalExpression();
	void Interpret(const myContext &ctxt);
protected:
private:
	string _statement;
};

class NonterminalExpression:public AbstractExpression
{
public:
	NonterminalExpression(AbstractExpression *expression ,int times);
	~NonterminalExpression();
	void Interpret(const myContext &ctxt);
protected:
private:
	AbstractExpression * m_expression;
	int m_times;
};

class Interpreter
{
public:
	Interpreter(void);
	~Interpreter(void);
};

