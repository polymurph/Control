#ifndef _PT1_H_
#define _PT1_H_


class PT1
{
	public:
	
	PT1(const float &K,
		const float &T,
		const float &T_s);
		
	PT1(const float &K,
		const float &T,
		const float &T_s,
		const float &w_1_initial);
		
	PT1(const float &a_0,
		const float &b_1);
	
	float calc(float val);
	void reset();
	
	float operator*(const float& val);
	
	
	private:
	
	float a_0;
	float b_1;
	float w_1;
};

#endif  // _PT1_H_