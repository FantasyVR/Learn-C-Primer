#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//to include _1
using namespace std::placeholders;
bool lessSix(const string & str,unsigned int limete)
{
	return str.size() < limete;
}
int main()
{
	string str;
	vector<string> vs;
	
	while(cin>>str)
		vs.push_back(str);

	auto count = count_if(vs.begin(), vs.end(),
						bind(lessSix,_1,6));

	cout<<"the count of words less than 6:"<< count <<endl;

	return 0;
}
