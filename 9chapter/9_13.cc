#include <iostream>
#include <list>
#include <vector>

using  std::cin;
using  std::cout;
using  std::endl;
using  std::list;
using  std::vector;


int main()
{
	list<int> l = {1, 3, 5, 7, 9};
	vector<double> vd(l.begin(),l.end());
	for(auto &t: vd)
		cout<< t << " ";
	cout<< endl;

	vector <int> vi = {2, 4, 6, 8, 10};
	vector<double> vd1(vi.begin(),vi.end());
	for(auto &t: vd1)
		cout<< t << " ";
	cout<< endl;

	return 0;
}
