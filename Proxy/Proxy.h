#pragma once


class Subject
{
public:
	virtual ~Subject();
	virtual void Request() = 0;
protected:
	Subject();
private:
};


class ConcreteSubject:public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	void Request();
protected:
private:
};

class Proxy
{
public:
	Proxy();	
	Proxy(Subject *sub);
	~Proxy(void);
	void Request();
protected:
private:
	Subject * m_sub;
};

