#include <iostream>
#include <string>
using namespace std;
bool haveCap(const string &s)
{
	for(auto c : s)
		if(c > 'A' && c < 'Z')
			return true;
	return false;
}
// & in the parameter is important, if we want to change s
void toUpper(string &s)
{
	for(auto &c: s)
		c = tolower(c);
}
int main()
{
	string str;
	cout<< "Please input a string"<<endl;
//	cin >> std::noskipws >> str; //this doesn't work, I don't know why
	getline(cin,str);
	if(haveCap(str))
		cout<<"yes, contain Captial word"<<endl;
	else
		cout<<"no captial word"<<endl;

	toUpper(str);
	cout<<"After change:"<<str<<endl;

	return 0;
}
