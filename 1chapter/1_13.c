#include <iostream>
using namespace std;

int main()
{
	int sum1=0,sum2=0;
	for(int i=50;i<=100;i++)
		sum1 += i;
	cout<<"sum1= " << sum1<<endl;

	for(int k=10;k>=0;k--)
		cout<<k<<"\t";

	int v1,v2;
	cout<<"Please input two number:";
	cin>> v1>> v2;
	int max = v1>v2?v1:v2;
	int min = v1>v2?v2:v1;
	for(min; min <= max; min++)
		cout << min << "\t";
	cout<<"\n";
	return 0;
}
