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
	{
		//version 1
		//vp.push_back(make_pair(str,val));
		//version 2
		//pair<string, int> tmp (str,val);
		//vp.push_back(tmp);
		//version 3
		pair<string, int> tt{str,val};
		vp.push_back(tt);
	}
	
	for(auto &t : vp)
		cout<< t.first <<":"<< t.second <<endl;
	return 0;
}
