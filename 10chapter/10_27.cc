#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi;
	int val;
	while(cin >> val)
		vi.push_back(val);

	vector<int> vv;
	unique_copy(vi.begin(),vi.end(),back_inserter(vv));
	
	for(auto i : vv)
		cout<< i << " ";
	cout<<endl;
	return 0;
}
