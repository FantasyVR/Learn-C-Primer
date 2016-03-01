#include <iostream>
using namespace std;
int main()
{
	const char ca[] = {'h','e','l','l','0'};
	const char *p = ca;
	while(*p)
	{
		cout<< *p << endl;
		p++;	
	}
	return 0;
}
