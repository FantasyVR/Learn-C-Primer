#include <iostream>
#include <vector>
#include <memory>
using namespace std;
vector<int>* fun1()
{
	return new vector<int>();
}
vector<int>* fun2(vector<int> *p)
{
	int val;
	while(cin >> val)
		p->push_back(val);

	return p;
}
void print(vector<int>* vec)
{
	for(auto &t : *vec)
		cout<< t << " ";
	cout<<endl;
	delete vec;
}

int main()
{
	vector<int> *v1 = fun1();
	vector<int> *v2 = fun2(v1);
	print(v2);

	return 0;
}
