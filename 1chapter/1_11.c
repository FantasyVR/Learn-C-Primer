#include <iostream>

int main()
{
	int v1,v2;
	std::cout<<"Please input two number:";
	std::cin>>v1>>v2;
	
	int max = v1>v2?v1:v2;
	int min = v1>v2?v2:v1;
	while(min<=max)
		std::cout<<min++<<std::endl;
	return 0;
}
