#include "Interpreter.h"


Interpreter::Interpreter(void)
{
}


Interpreter::~Interpreter(void)
{
}

AbstractExpression::AbstractExpression()
{

}
AbstractExpression::~AbstractExpression()
{

}

void AbstractExpression::Interpret(const myContext &ctxt)
{

}

TerminalExpression::TerminalExpression(const string &state)
{
	_statement = state;
}
TerminalExpression::~TerminalExpression()
{

}
void TerminalExpression::Interpret(const myContext &ctxt)
{
	cout<<this->_statement <<"TerminalExpression"<<endl;
}
NonterminalExpression::NonterminalExpression(AbstractExpression *expression ,int times)
{
	this->m_expression = expression;
	this->m_times = times;
}

NonterminalExpression::~NonterminalExpression()
{

}

void NonterminalExpression::Interpret(const myContext &ctxt)
{
	for (int iIndex = 0 ; iIndex < m_times ; iIndex++)
	{
		this->m_expression->Interpret(ctxt);
	}
}