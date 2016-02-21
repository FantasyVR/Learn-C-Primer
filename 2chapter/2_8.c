#include <iostream> 
int i  = 10;
int main()
{
	std::cout << "\62\x4d" << std::endl;
	std::cout << '\62' << '\t' << '\x4d' << std::endl;

	int i = 100;
	int j = i;
	std::cout << j << std::endl;
	

	int k = 100, sum = 0;
	for(int k = 0; k != 10; k++)
		sum += k;
	std::cout << k <<" " << sum << std::endl;
	return 0;
}
