#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::string;
using std::pair;

int main()
{
	string str;
	int val;
	vector<pair<string, int>> vp;
	while(cin>> str >> val)
		vp.push_back(make_pair(str,val));
	
	for(auto &t : vp)
		cout<< t.first <<":"<< t.second <<endl;
	return 0;
}
