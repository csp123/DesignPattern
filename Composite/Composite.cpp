#include "Composite.h"


Composite::Composite(void)
{
}


Composite::~Composite(void)
{
}


void Composite::Operator()
{
	vector<MyComponent* >::iterator  iBegin = m_comVec.begin();
	vector<MyComponent* >::iterator  iEnd = m_comVec.end();
	for (; iBegin != iEnd ; iBegin++)
	{
		(*iBegin)->Operator();
	}

}
void Composite::Add(MyComponent* com)
{
	m_comVec.push_back(com);
}
void Composite::Remove( MyComponent* com)
{
	//m_comVec.erase(com);
	//m_comVec.erase(com);
	vector<MyComponent* >::iterator  iBegin = m_comVec.begin();
	vector<MyComponent* >::iterator  iEnd = m_comVec.end();
	for (; iBegin != iEnd ; iBegin++)
	{
		//MyComponent* temp = *iBegin;
		if ( (*iBegin) == com)
		{
			m_comVec.erase(iBegin);
			break;
		}
		
	}
}
MyComponent *Composite::GetChild(int index)
{
	if (index > m_comVec.size())
	{
		return NULL;
	}
	return m_comVec[index];
}