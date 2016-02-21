#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "l1 " << v1.size() <<endl;
	cout << "l2 " << v2.size() <<endl;
	cout << "l3 " << v3.size() <<endl;
	cout << "l4 " << v4.size() <<endl;
	cout << "l5 " << v5.size() <<endl;
	cout << "l6 " << v6.size() <<endl;
	cout << "l7 " << v7.size() <<endl;


	return 0;
}
