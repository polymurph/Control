#ifndef _PT2_H_
#define _PT2_H_

class PT2
{
	public:
		PT2(const float& K,
		    const float& D,
		    const float& ohmwga_0);

		float calc(const float& val);
		reset();

		float operator*(const float& val);


	private:


};

#endif	// _PT2_H_

