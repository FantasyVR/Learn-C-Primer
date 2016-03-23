#include <iostream>
#include <string>
#include <list>

using std::string;
using std::list;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str;
	list<string> ls;
	while(std::cin>>str)
		ls.insert(ls.end(),str);	
	
	for(auto &it : ls)
		cout<< it << " ";
	cout<<endl;

	return 0;
}
