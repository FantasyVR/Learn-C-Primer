#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s = "Hello World!";
	decltype(s.size()) i = 0;
	for(; i < s.size(); i++)
		s[i] = 'X';
	cout << s << endl;
	
	string s1 = "hi";
	decltype(s1.size()) j = 0;
	while(j < s1.size())
	{
		s1[j] = 'X';
		j++;
	}
	cout << s1 << endl;

	return 0;
}
