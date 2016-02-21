#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
/*
	vector<int> v1;
	auto it = v1.begin(), it1 = v1.end();
	cout << v1.size() << endl;
	for(; it != it1; it++)
		cout<< *it <<endl;
*/
/*
	vector<int> v2(10);
	auto it = v2.begin(), it1 = v2.end();
	cout << v2.size() << endl;
	for(; it != it1; it++)
		cout<< *it <<endl;
*/
/*
	vector<int> v3(10,42);
	auto	it = v3.begin(), it1 = v3.end();
	cout << v3.size() << endl;
	for(; it != it1; it++)
		cout<< *it <<endl;
*/
/*

	vector<int> v4{10};
	it = v4.begin(), it1 = v4.end();
	cout << v4.size() << endl;
	for(; it != it1; it++)
		cout<< *it <<endl;

	vector<int> v5{10,42};
	it = v5.begin(), it1 = v5.end();
	cout << v5.size() << endl;
	for(; it != it1; it++)
		cout<< *it <<endl;

	vector<string> v6{10};
	it = v6.begin(), it1 = v6.end();
	cout << v6.size() << endl;
	for(; it != it1; it++)
		cout<< *it <<endl;
*/
	vector<string> v7{10,"hi"};
	auto	it = v7.begin(), it1 = v7.end();
	cout << v7.size() << endl;
	for(; it != it1; it++)
		cout<< *it <<endl;
	return 0;
}
