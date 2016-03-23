#include <iostream>
#include <string>
#include <deque>

using std::string;
using std::deque;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str;
	deque<string> qu;
	while(std::cin>>str)
		qu.push_back(str);	
	
	for(auto &it : qu)
		cout<< it << " ";
	cout<<endl;

	return 0;
}
