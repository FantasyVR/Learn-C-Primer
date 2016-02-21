#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	cin >> s;
	const string temp = s;
	s = "";
	for(auto &c : temp)
		if(!ispunct(c))
			s  += c;
	cout << s << endl;
	return 0;
}
