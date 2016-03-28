#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

void elimDups(list<string> &words)
{
	words.sort();
	words.unique();

	for(auto &t : words)
		cout<< t <<" ";
	cout<< endl;
}

int main()
{
	list<string> ls;
	string str;
	while(cin>>str)
		ls.push_back(str);

	elimDups(ls);

	return 0;
}
