#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int val;
	vector<int> v;
	while(cin >> val)
		v.push_back(val);
	
	for(auto it = v.begin(); it != v.end()-1; it++)
		cout << *it + *(it+1) << endl;

	for(auto it1 = v.begin(), it2 = v.end()-1; it1 != it2 && it1 < it2; it1++, it2--)
		cout << *it1 + *it2 << endl;

	return 0;
}
