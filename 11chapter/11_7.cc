#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	map<string, vector<string>> family;
	string familyname, childname;
	cout<<"Please input familyname and childname pair"<<endl;
	while(cin >> familyname >> childname >> birthday)
	{
		family[familyname].push_back(childname);
	}

	cout<<"The family name and list of their children"<<endl;
	for(auto &t : family)
	{
		cout<< t.first <<":\n";
		for(auto &m:t.second)
			cout<< m <<" ";
		cout<<endl;
	}

	return 0;
}
