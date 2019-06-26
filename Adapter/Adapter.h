#pragma once

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
protected:
private:
};

class Adapter:public Target,public Adaptee
{
public:
	Adapter(Adaptee *ade);
	~Adapter(void);
	void Request();
protected:
private:
	Adaptee *m_ade;
};

