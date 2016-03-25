#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> vs;
	string s;
	while(cin >> s)
		vs.push_back(s);

	auto end_five =	stable_partition(vs.begin(), vs.end(), 
							[](const string &str)
							{return str.size() > 5;});

	vs.erase(end_five,vs.end());

	for(auto t: vs)
		cout<< t <<" ";
	cout<<endl;
	return 0;
}
