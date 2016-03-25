#include <iostream>
#include <iterator>
#include <numeric>
#include <list>
using namespace std;

int main()
{
	list<int> vl;
	fill_n(back_inserter(vl),10,0);
	for(auto i : vl)
		cout<< i <<" ";
	cout<<endl;

	list<int> vl1(20);
	fill_n(vl1.begin(),20,5);
	for(auto i : vl1)
		cout<< i <<" ";
	cout<<endl;

	return 0;
}
