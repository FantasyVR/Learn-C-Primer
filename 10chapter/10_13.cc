#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool bigerThanFive(string &str)
{
	return str.size() > 5;
}

int main()
{
	vector<string> vs;
	string s;
	while(cin >> s)
		vs.push_back(s);

	auto end_five =	partition(vs.begin(), vs.end(), bigerThanFive);

	vs.erase(end_five,vs.end());

	for(auto t: vs)
		cout<< t <<" ";
	cout<<endl;
	return 0;
}
