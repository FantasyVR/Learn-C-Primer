#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> fi = { 1,2,3,4,5,6,7,8,9};
	auto pre = fi.before_begin();
	auto cur = fi.begin();

	while(cur != fi.end())
	{
		if(*cur&0x1)
		{
			cur = fi.erase_after(pre);
		}
		else
		{
			pre = cur;
			++cur;
		}
	}

	for(auto it: fi)
		cout<< it <<" ";
	cout<<endl;

	return 0;
}
