#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	//print(words);
	auto  end_unique = unique(words.begin(),words.end());
	//print(words);
	words.erase(end_unique,words.end());
	//print(words);
}
string make_plural(string::size_type ctr,const string &word, const string &ending)
{
	return ctr>1? word+ending: word; 
}
bool check_size(const string &str, string::size_type sz)
{
	return str.size() >= sz;
}
void biggies( vector<string> &words, vector<string>::size_type sz)
{
	//elimate the dumplited 
	elimDups(words);
	stable_sort(words.begin(),words.end(),
				[](const string &s1,const string &s2)
				{return s1.size() < s2.size();});

	auto wc = find_if(words.begin(),words.end(),
					bind(check_size,_1,sz));

	auto count = words.end() - wc;
	cout<< count <<" "<< make_plural(count, "word", "s")
		<<" of length "<<sz << " or longer" <<endl;

	for_each(wc, words.end(),
		[](const string &s){cout<< s <<" ";});

	cout<< endl;
	
}
int main()
{
	string str;
	vector<string> vs;

	while(cin >> str)
		vs.push_back(str);

	biggies(vs,4);

	return 0;
}
