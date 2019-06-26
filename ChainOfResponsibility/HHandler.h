#pragma once
class HHandler
{
public:	
	virtual ~HHandler(void);
	virtual void HandleRequest() = 0;
	void SetSuccessor(HHandler * succ);
	HHandler * GetSuccessor();
protected:
	HHandler(void);
	HHandler(HHandler *succ);
private:
	HHandler * m_handle;
};

class ConcreteHandlerA : public HHandler
{
public:
	ConcreteHandlerA();
	~ConcreteHandlerA();
	void HandleRequest();
	ConcreteHandlerA(HHandler *succ);
};

class ConcreteHandlerB : public HHandler
{
public:
	ConcreteHandlerB();
	~ConcreteHandlerB();
	void HandleRequest();
	ConcreteHandlerB(HHandler *succ);
};