#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> vs;
	string word;

	while(cin >>word)
		if(find(vs.begin(),vs.end(),word) == vs.end())
			vs.push_back(word);

	for(auto &t : vs)
		cout<< t <<" ";
	cout<<endl;

	return 0;
}
