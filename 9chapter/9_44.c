#include <iostream>
#include <string>

using namespace std;

void replacefun(string &s, string const& oldVal, string const& newVal)
{
	for(size_t pos=0; pos<s.size()-oldVal.size();)
	{
		if(s[pos] == oldVal[0] && s.substr(pos,oldVal.size())== oldVal)
			s.replace(pos, oldVal.size(), newVal),
			pos += newVal.size();
		else
			++pos;
	}
}

int main()
{
	string str{" To derive straight thru is a foolish, tho courageous act."};
	replacefun(str, "tho", "though");
	cout<< str <<endl;

	replacefun(str, "thru", "through");
	cout<< str <<endl;

	return 0;
}
