#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "Sales_item.h"
using namespace std;


int main()
{
	istream_iterator<Sales_item> in(cin), eof;
	vector<Sales_item> vs;
	while(in != eof)
		vs.push_back(*in++);

	sort(vs.begin(), vs.end(), compareIsbn);

	for( auto beg = vs.cbegin(),end = beg; beg != vs.cend(); beg = end)
	{
		end = find_if(beg,vs.cend(), [beg](const Sales_item &iterm)
		{return iterm.isbn() != beg->isbn();});
		
		cout<< accumulate(beg, end, Sales_item(beg -> isbn())) << endl;
	}

	return 0;
}
