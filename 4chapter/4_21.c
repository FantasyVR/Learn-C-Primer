#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ve = {1,2,3,4,5,6,7,8,9};
	//version 1
	for(auto r: ve)
		if( r%2 != 0)
			cout<< 2*r << " ";
	cout<<endl;
	
	
	for(auto i : ve)
		cout<<( (i&0x1)?i*2:0) << " ";
	cout<<endl;
	return 0;
}
