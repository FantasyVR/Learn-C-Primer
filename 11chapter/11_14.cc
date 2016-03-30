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
	string birthday;
	vector<pair<string,string>> vnamebirth;
	cout<<"Please input familyname and childname pair and birthday "<<endl;
	while(cin >> familyname >> childname >> birthday)
	{
		family[familyname].push_back(childname);
		vnamebirth.push_back(make_pair(childname,birthday));
	}

	cout<<"The family name and list of their children"<<endl;
	for(auto &t : family)
	{
		cout<< t.first <<":\t";
		for(auto &m:t.second)
			cout<< m <<" ";
		cout<<endl;
	}

	for(auto &m : vnamebirth)
		cout<< "name: "<<m.first <<" birthday: "<< m.second <<endl;
	return 0;
}
