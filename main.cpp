#include <iostream>
#include "cpp_src/pt1.h"


using namespace std;




int main(void)
{
	float K = 1;
	float T = 1;
	float T_s = 1;
	
	int i = 0;
	int N = 10;


	PT1 pt1(K, T, T_s); 
	
	cout << pt1 * 1 << endl;
	
	for(i = 0; i < N; ++i) {
		cout << pt1 * 0 << endl;
	}
	
	return 0;
}
