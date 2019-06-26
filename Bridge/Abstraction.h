#pragma once
class AbstractionImp;
class Abstraction
{
public:	
	virtual ~Abstraction(void);
	virtual void Operator() = 0;
protected:
	Abstraction(void);
};

class RefinedAbstraction:public Abstraction
{
public:
	RefinedAbstraction(AbstractionImp *imp);
	~RefinedAbstraction();
	void Operator();
private:
	AbstractionImp * m_imp;
};

