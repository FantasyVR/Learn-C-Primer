#include <iostream>
#include <string>
#include <vector>

using namespace std;

void replacefun(string &s, const string &oldVal, const string &newVal)
{
	string::size_type olen = oldVal.size();
	string::size_type nlen = newVal.size();
	for(auto cur=s.begin(); cur<=s.end()-oldVal.size();)
	{
		if( oldVal == string{cur, cur+oldVal.size()})
		{
			cur = s.erase(cur, cur+oldVal.size());
			cur = s.insert(cur,newVal.begin(),newVal.end());
			cur += newVal.size();
		}
		else
			++cur;
	}
}

int main()
{
	string str("hello tho my lady tho"), s1("tho"),s2("though");
	replacefun(str,s1,s2);
	cout<< str <<endl;

	return 0;
}
