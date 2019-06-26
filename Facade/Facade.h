#pragma once

class Subsystem1
{
public:
	Subsystem1();
	~Subsystem1();
	void Operation();
protected:
private:
};

class Subsystem2
{
public:
	Subsystem2();
	~Subsystem2();
	void Operation();
protected:
private:
};

class Facade
{
public:
	Facade(void);
	~Facade(void);
	void OperatorWrapper();
protected:
private:
	Subsystem1 *m_sub1;
	Subsystem2 *m_sub2;

};

