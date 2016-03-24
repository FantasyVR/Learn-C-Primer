#include <iostream>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;
// remove evens and double odds
void remove_even_list(list<int> &li)
{
	for(auto it=li.begin(); it != li.end();)
	{
		if(*it&0x1)
		{
			li.insert(it, *it);
			advance(it, 2);
		}
		else
			it = li.erase(it);
	}
}

void remove_even_forward(forward_list<int> &fl)
{
	auto pre = fl.before_begin();
	for(auto cur=fl.begin(); cur!=fl.end();)
	{
		if( *cur&0x1)
		{
			pre = cur;
			++cur;
		}
		else
		{
			
			cur = fl.erase_after(pre);
		}
	}
}
void rm_even_double_odds_forward(forward_list<int> &dofl)
{
	for(auto cur=dofl.begin(),pre=dofl.before_begin(); cur!=dofl.end();)
	{
		if(*cur&0x1)
		{
			cur = dofl.insert_after(pre, *cur);
			advance(cur,2);
			advance(pre,2);
		}
		else
		{
			cur = dofl.erase_after(pre);
		}
	}
}
int main()
{
	list<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	forward_list<int> data1(begin(data),end(data));
	forward_list<int> data2(begin(data),end(data));
	remove_even_list(data);
	
	cout<<"doubled evens list: ";
	for(auto it: data)
		cout<< it << " ";
	cout<<endl;
	cout<<"After remove evens: ";
	remove_even_forward(data1);
	for(auto it: data1)
		cout<< it << " ";
	cout<<endl;
	cout<<"After remove evens and double odds: ";
	rm_even_double_odds_forward(data2);
	for(auto it: data2)
		cout<< it << " ";
	cout<<endl;
	return 0;
}
