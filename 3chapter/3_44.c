#include <iostream>
using namespace std;

int main()
{

	int ia[3][4] = {{1,2,3,4},{5,6,7,8},{1,3,4,6}};
	
	using int_array = int[4];
	
	for(int_array *p = ia; p != ia+3; p++)
		for(int *q = *p; q != *p+4; q++)
			 cout<< *q << " " ;
	cout<< endl;

	return 0;
}
