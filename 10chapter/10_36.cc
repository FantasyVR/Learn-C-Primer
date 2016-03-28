#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	list<int> li;
	int val;
	while( cin >>val)
		li.push_back(val);
	auto wc = find(li.crbegin(),li.crend(),0);
	cout<< distance(wc, li.crend())<< endl;

	return 0;
}
