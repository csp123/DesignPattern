#pragma once
class Singleton
{

public:
	static Singleton * GetInstance();
	~Singleton();
	void Operator();
protected:
		Singleton(void);
private:
	static Singleton * m_Ins;
};

