#include <iostream>
using namespace std;
int fun()
{

	static int val = 0;
	return val++;
}
int main()
{
	for(int i=0; i<10; i++)
		cout<< fun() << endl;

	return 0;
}
