#include <iostream>
using namespace std;
void reset(int &val)
{
	val = 0;
}
int main()
{
	int v1 = 100;

	reset(v1);

	cout<< v1 <<endl;

	return 0;
}
