#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	string s1 = "";
/*
	while(cin >> s)
		s1 += s;
	cout << s1 << endl;
	cout << "next program!\n";
*/
	s1 = "";
	while(cin >> s)
		s1 += s + " ";
	cout << s1 << endl;
	return 0;

}
