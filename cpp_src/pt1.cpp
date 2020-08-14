#include "pt1.h"



PT1::PT1(const float &K,
	 const float &T,
	 const float &T_s)
{
	a_0 = -(T_s - T) / T;
	b_1 = T_s * K / T;
	w_1 = 0;
}

PT1::PT1(const float &K,
	 const float &T,
	 const float &T_s,
	 const float &w_1_initial)
{
	a_0 = (T - T_s) / K;
	b_1 = T_s * K / T;
	w_1 = w_1_initial;
}

PT1::PT1(const float &a_0,
		 const float &b_1) :
		 a_0(a_0),
		 b_1(b_1),
		 w_1(0)
{
	
}	
			

float PT1::calc(float val)
{	

	// canonical form of PT1
	float w_0 = val + w_1 * a_0;
	float y = w_1 * b_1;
	
	w_1 = w_0;
	
	return y;
}

void PT1::reset()
{
	w_1 = 0;
}

float PT1::operator*(const float& val)
{
	return calc(val);
}
