#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1 = {1,4,5,2,5};
	vector<int> v2 = {1,4,5,2,5,7};

	unsigned len = v1.size()>v2.size()?v2.size():v1.size();
	int i=0;
	for(; i<len; i++)
		if(v1[i] != v2[i])
			break;
	if( i == len)
		cout<<"yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}
