#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;
template<typename Sequence>
void print(Sequence const& vv)
{
	for(auto &t:vv)
		cout<< t << " ";
	cout<<endl;
}
int main()
{
	vector<int> vi = {1,2,3,4,5,6,7,8,9};

	vector<int> v1,v3;
	list<int> v2;

	copy(vi.begin(),vi.end(),inserter(v1,v1.begin()));
	print(v1);
	copy(vi.begin(),vi.end(),front_inserter(v2));
	print(v2);
	copy(vi.begin(),vi.end(),back_inserter(v3));
	print(v3);

	return 0;
}
