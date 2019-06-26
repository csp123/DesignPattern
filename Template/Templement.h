#pragma once
class AbsTemplement
{
public:
	AbsTemplement(void);
	~AbsTemplement(void);
	virtual void Primitive1() = 0;
	virtual void Primitive2() = 0;
	void TemplateMethod();
};


class ConcreteTemplate1:public AbsTemplement
{
public:
	ConcreteTemplate1();
	~ConcreteTemplate1();
	void Primitive1();
	void Primitive2();
	void TemplateMethod();
};



class ConcreteTemplate2:public AbsTemplement
{
public:
	ConcreteTemplate2();
	~ConcreteTemplate2();
	void Primitive1();
	void Primitive2();
	void TemplateMethod();
};