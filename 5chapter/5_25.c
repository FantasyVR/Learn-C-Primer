#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int v1,v2;
	cin >> v1 >> v2;
	try{
		if(v2 == 0)
		throw runtime_error("divisor is zero!");
		cout<< v1/v2 <<endl;
	}catch(runtime_error e)
	{
		cout<< e.what() <<endl;	
	}

	return 0;
}
