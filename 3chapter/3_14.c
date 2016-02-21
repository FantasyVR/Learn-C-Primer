#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v;
	int val;
	while(cin >> val)
		v.push_back(val);
	
	vector<string> v1;
	string s;
	while(cin >> s)
		v1.push_back(s);

	return 0;
}

