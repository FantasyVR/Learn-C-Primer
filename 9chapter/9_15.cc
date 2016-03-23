#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1 = {1,3,5,7,9,11};
	vector<int> v2 = {1,3,5,7};
	vector<int> v3 = {1,3,5,9};
	vector<int> v4 = {1,3,5,7,9,11};

	if(v1 > v2)
		cout<< "v1 > "<<"v2"<<endl;
	else
		cout<< "v1 < "<<"v2"<<endl;

	if(v1 > v3)
		cout<< "v1 > "<<"v3"<<endl;
	else
		cout<< "v1 < "<<"v3"<<endl;

	if(v1 > v4)
		cout<< "v1 > "<<"v4"<<endl;
	else if(v1 == v4)
		cout<< "v1 = "<<"v4"<<endl;
	else
		cout<< "v1 < "<<"v4"<<endl;

	
	
	return 0;
}
