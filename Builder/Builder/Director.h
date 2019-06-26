#pragma once

class Builder;
class Director
{
public:
	Director(Builder *bld);
	~Director(void);
	void Construct();
private:
	Builder * m_bld;
};

