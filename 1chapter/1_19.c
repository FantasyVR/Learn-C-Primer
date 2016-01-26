#include <iostream>
using namespace std;

int main()
{
	cout<< "Please input two numbers:";
	int val1, val2 ;
	cin >> val1 >> val2;
	if(val1 > val2 )
	{
		int temp = val1;
		val1 = val2;
		val2 = temp;
	}
	for(val1; val1 <= val2; val1++)
		cout << val1 << "\t";
	cout <<endl;
	return 0;
}
