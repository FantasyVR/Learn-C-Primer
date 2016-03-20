#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
int main()
{
	int v1 = 10, v2 = 34;

	int *p = &v1, *q = &v2;
	swap(p,q);

	cout<< *p << *q <<endl;

	return 0;
}
