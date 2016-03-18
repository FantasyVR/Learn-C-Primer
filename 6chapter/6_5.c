#include <iostream>

using namespace std;
int abs(int val)
{
	return val >= 0? val : -val;
}
int main()
{
	cout<<"Please input a number:";
	int val;
	cin >> val;

	cout<< abs(val)<<endl;

	return 0;
}
