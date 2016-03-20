#include <iostream>

using namespace std;
int Big(int val,int *v)
{
	return val > *v ? val:*v;
}
int main()
{
	int v1 = 10, v2 = 9;
	int *p = &v2;

	int re = Big(v1, p);

	cout<< re << endl;

	return 0;
}
