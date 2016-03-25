#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#include <numeric>

using namespace std;
void print(vector<string> &str)
{
	for(auto i : str)
		cout<< i << " ";
	cout<<endl;
}
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	print(words);
	auto  end_unique = unique(words.begin(),words.end());
	print(words);
	words.erase(end_unique,words.end());
	print(words);
}
bool isShorter(const string &s1,const string &s2)
{
	return s1.size() < s2.size();
}
int main()
{
	vector<string> words{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};	
	elimDups(words);

	stable_sort(words.begin(),words.end(),isShorter);
	print(words);

	return 0;
}
