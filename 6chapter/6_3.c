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
	int result = fact(5);

	cout<<std::boolalpha<< (result == 120) << endl;

	return 0;
}
