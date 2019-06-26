#pragma once
class MyComponent
{
public:
	MyComponent(void);
	virtual ~MyComponent(void);
	virtual void Operator()=0;
	virtual void Add(const MyComponent&);
	virtual void Remove(const MyComponent&);
	virtual MyComponent* GetChild(int);
};

