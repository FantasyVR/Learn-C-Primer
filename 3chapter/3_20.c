#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int val;
	vector<int> v;
	while(cin >> val)
		v.push_back(val);
	decltype(v.size()) cnt = 0;
	for(; cnt < v.size()-1; cnt++)
		cout << v[cnt] + v[cnt+1]<< endl;

	decltype(v.size()) limit = v.size()/2;
	for(cnt = 0; cnt < limit; cnt++)
		cout << v[cnt] + v[v.size()-1-cnt] << endl;
	return 0;
}
