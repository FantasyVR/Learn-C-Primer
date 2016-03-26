#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;
bool check_size(const string &str, string::size_type sz)
{
	return str.size() < sz;
}

int main()
{
	string str = "hello";
	auto len = str.size();
	int val;
	vector<int> vi;
	while(cin >> val)
		vi.push_back(val);

	auto pos  = find_if(vi.begin(), vi.end(),
						bind(check_size,str,_1));
	cout<< "the first ellment of vi that bigger than str.size() is "<< *pos <<endl;
	
	return 0;
}
