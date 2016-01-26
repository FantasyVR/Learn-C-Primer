#include <iostream>

int main()
{
	int sum = 0;
	int iter= 50;
	while(iter<=100)
		sum += iter++;
	std::cout<<"sum= "<<sum<<std::endl;
	return 0;
}
