#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::list<int> li = {1,2,3,4,5,6,7,8,9,10};

	std::deque<int> dq1,dq2;

	for(auto &it: li)
	{
		if( it % 2 != 0)
			dq1.push_back(it);	
		else
			dq2.push_back(it);
	}
	
	for(auto &t : dq1)
		std::cout<< t << " ";
	std::cout<<std::endl;

	for(auto &p:dq2)
		std::cout<< p << " ";
	std::cout<<std::endl;
	return 0;
}
