#include <iostream>
#include <string>
using namespace std;
string & addStr(string &name, string const& prefix, string const& posfix)
{
	name.insert(0,prefix);
	size_t len = name.size();
	name.insert(len,posfix);
	return name;
}
int main()
{
	string name = "John";
	string prefix = "Mr.", postfix = "III";
	name = addStr(name,prefix,postfix);
	cout<< name <<endl;

	return 0;
}
