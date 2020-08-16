#ifndef _PT1_H_
#define _PT1_H_



/// @brief
/// @param
/// @return

class PT1
{
	public:

	/// @brief	Constructor with internal state set to default = 0.
	/// @param	K	Gain factor.
	/// @param	T	Time constant.
	/// @param	T_s	Sampling periode.
	PT1(const float &K,
	    const float &T,
	    const float &T_s);
		
	/// @brief	Constructor with internal state set to default = 0.
	/// @param	K		Gain factor.
	/// @param	T		Time constant.
	/// @param	T_s		Sampling periode.
	/// @param	&w_1_initial	Inital value.
	PT1(const float &K,
	    const float &T,
	    const float &T_s,
	    const float &w_1_initial);
	
	/// @brief	Costructor for DSP version.
	/// @TODO	Write doku.	
	PT1(const float &a_0,
	    const float &b_1);
	
	/// @brief
	/// @param
	/// @return
	float calc(float val);
	
	/// @brief	Resets the initial state to 0.
	void reset();
	
	float operator*(const float& val);
	
	
	private:
	
	float a_0;
	float b_1;
	float w_1;
};

#endif  // _PT1_H_
