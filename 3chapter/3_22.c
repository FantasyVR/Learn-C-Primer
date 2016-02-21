#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> text;
	string s;
	while( cin >> s)
		text.push_back(s);

	vector<string>::iterator it1, it2;
	it1 = text.begin();
	it2 = text.end();
	for(; it1 != it2 && !it1->empty(); it1++)
		for(auto &c : *it1)
			c = toupper(c);
	for(auto it = text.cbegin(); it != text.cend()&& !it->empty(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;	
}
