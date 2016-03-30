#include <iostream>
#include <memory>
#include <vector>
using namespace std;

shared_ptr<vector<int>> fun1()
{
	return make_shared<vector<int>>();
}
shared_ptr<vector<int>> fun2(shared_ptr<vector<int>> p)
{
	int val;
	while(cin >> val)
		p->push_back(val);

	return p;
}

void print(shared_ptr<vector<int>> p)
{
	for(auto &t : *p)
		cout<< t << " ";
	cout<<endl;
}

int main()
{
	auto v1 = fun2(fun1());

	print(v1);

	return 0;
}
