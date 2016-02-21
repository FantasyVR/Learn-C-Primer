#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
//get a line 
	string s1;
	getline(cin,s1);
	cout << s1 << std::endl;
//get a word
	string s2;
	cin >> s2;
	cout << s2 << std::endl;

	return 0;
}
