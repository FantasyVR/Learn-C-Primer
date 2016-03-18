#include <iostream>

using namespace std;
int fact(int val)
{
	if(val == 1)
		return 1;
	else
		return val * fact(val-1);
}
int main()
{
	cout<<"Please input a interger:";
	int v;
	cin >> v;
	int result = fact(v);

	cout<<result << endl;

	return 0;
}
