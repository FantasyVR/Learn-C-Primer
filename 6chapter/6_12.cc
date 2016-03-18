#include <iostream>

using namespace std;
void swap(int &p, int &q)
{
	int tmp;
	tmp = p;
	p  = q;
	q  = tmp;
}
int main()
{
	int v1, v2;
	cin >> v1 >>v2;

	swap(v1,v2);

	cout<<"After swap:"<<"v1:"<<v1<<" v2:"<<v2<<endl;

	return 0;
}
