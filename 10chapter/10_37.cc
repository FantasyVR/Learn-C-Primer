#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> li;
	//////////////////copy(vi.crend()-3,vi.crend()-7,back_inserter(li));
	copy(vi.crbegin()+3,vi.crbegin()+8,back_inserter(li));
	for(auto &i:li)
		cout<< i <<" ";

	cout<<endl;

	return 0;
}
