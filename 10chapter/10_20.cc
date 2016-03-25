#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	//print(words);
	auto  end_unique = unique(words.begin(),words.end());
	//print(words);
	words.erase(end_unique,words.end());
	//print(words);
}
unsigned int coutFun(vector<string> words,unsigned int lenLimite)
{
	elimDups(words);	
	auto count = count_if(words.begin(),words.end(),
						[lenLimite](const string &word)
						{ return word.size() > lenLimite;});

	return count;
}
int main()
{
	string str;
	vector<string> vs;
	while( cin >> str)
		vs.push_back(str);

	cout<<coutFun(vs,6) << " words is longger than 6"<<endl;

	return 0;
}
