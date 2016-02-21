#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	vector<string> v;
	while(cin >> s)
		v.push_back(s);
	for(auto &c : v)
		for(auto &d : c)
			d = toupper(d);
	for(auto &c : v)
		cout << c << endl;

	return 0;
}
