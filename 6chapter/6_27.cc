#include <iostream>
#include <initializer_list>
using namespace std;
void fun(initializer_list<int> li)
{
	int sum = 0;
	for(auto i=li.begin(); i!=li.end(); i++)
		 sum += *i;

	cout<< sum <<endl;
}
int main()
{
	fun({2,4,5,67});

	return 0;
}
