#include <iostream>
using namespace std;

int main()
{

	int ia[3][4] = {{1,2,3,4},{5,6,7,8},{1,3,4,6}};
	
	for(auto &p : ia)
		for(auto q : p)
			cout<< q << " ";
	
	
	cout<< endl;

	return 0;
}
