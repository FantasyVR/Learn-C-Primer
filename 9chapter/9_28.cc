#include <iostream>
#include <forward_list>
#include <string>

using namespace std;
void fun(forward_list<string> &fs,const string &s1,const string &s2)
{
	auto cur = fs.begin();
	for(;cur != fs.end(); ++cur)
		if( (*cur) == s1)
		{
			fs.insert_after(cur, s2);
			return;
		}
	if( cur == fs.end())
		fs.insert_after(cur,s2);
}
int main()
{
	forward_list<string> fs = { "hi", "world", "mi", "lin"};

	string s1("lin");
	string s2("mo");

	fun( fs, s1, s2);
	for(auto it: fs)
		cout<< it << " ";
	cout<< endl;

	return 0;
}
