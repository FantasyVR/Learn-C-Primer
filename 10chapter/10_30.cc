#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


int main()
{
	istream_iterator<int> in(cin),eof;
	vector<int> vi;

	copy(in,eof,back_inserter(vi));

	sort(vi.begin(),vi.end(),
		[](const int v1,const int v2)
		{return v1 < v2;});

	ostream_iterator<int> out(cout," ");

	for(auto &t : vi)
		*out++ = t;
	cout<<endl;
	return 0;
}
