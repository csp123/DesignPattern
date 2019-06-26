#include "FlyWeight.h"


FlyWeight::FlyWeight(string intrinsicState)
{
	this->_intrinsticState = intrinsicState;
}


FlyWeight::~FlyWeight(void)
{
}

void FlyWeight::Operation(const string &extrinsicState)
{

}

string FlyWeight::GetIntrinsicState()
{
	return this->_intrinsticState;
}



ConcreteFlyWeight::ConcreteFlyWeight(string intrinsicState):FlyWeight(intrinsicState)
{
	//this->_intrinsticState = intrinsicState;
	cout<<"ConcreteFlyWeight Build..."<<intrinsicState<<endl;
}
ConcreteFlyWeight::~ConcreteFlyWeight()
{

}
void ConcreteFlyWeight::Operation(const string &extrinsicState)
{
	cout<<"ConcreteFlyWeight: ÄÚ [ " << this->GetIntrinsicState() << " ] Íâ[ "<<extrinsicState<<" ]"<<endl;
}