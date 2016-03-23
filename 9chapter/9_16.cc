#include <iostream>
#include <vector>
#include <list>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
	list<int> v1 = {1,3,5,7,9,11};
	vector<int> v2 = {1,3,5,7};
	vector<int> v3 = {1,3,5,9};

	if(vector<int>(v1.begin(),v1.end()) > v2)
		cout<< "v1 > "<<"v2"<<endl;
	else
		cout<< "v1 < "<<"v2"<<endl;

	if(vector<int>(v1.begin(),v1.end()) > v3)
		cout<< "v1 > "<<"v3"<<endl;
	else
		cout<< "v1 < "<<"v3"<<endl;

	return 0;
}
