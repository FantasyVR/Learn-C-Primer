#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	int v1,v2;
	cin >> v1 >> v2;
	if(v2 == 0)
		throw runtime_error("divisor is zero!");
	cout<< v1/v2 <<endl;

	return 0;
}
