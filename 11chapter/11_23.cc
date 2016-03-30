#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	multimap<string, string> family;
	string familyname, childname;
	cout<<"Please input familyname and childname pair"<<endl;
	while(cin >> familyname >> childname)
	{
		 family.emplace(familyname,childname);
	}

	cout<<"The family name and list of their children"<<endl;
	for(auto &t : family)
	{
		cout<< t.first <<":\t";
		for(auto &m:t.second)
			cout<< m ;
		cout<<endl;
	}

	return 0;
}
