#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<const char*> old_style{"I", "evol", "ouy"};
	vector<string> sv(old_style.begin(),old_style.end());

	for(auto &it : sv)
		cout<< it << " ";
	cout<<endl;

	return 0;
}
