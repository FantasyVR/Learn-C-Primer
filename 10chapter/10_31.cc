#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


int main()
{
	istream_iterator<int> in(cin),eof;
	vector<int> vi(in,eof);
	sort(vi.begin(),vi.end());
	unique_copy(vi.cbegin(), vi.cend(), ostream_iterator<int>(cout," "));
	cout<<endl;
	return 0;
}
