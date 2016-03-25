#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void print(vector<string> &str)
{
	for(auto i : str)
		cout<< i << " ";
	cout<<endl;
}
string make_plural(size_t ctr, const string &word,
					const string &ending)
{
	return ctr>1 ? word + ending : word;
}
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	//print(words);
	auto  end_unique = unique(words.begin(),words.end());
	//print(words);
	words.erase(end_unique,words.end());
	//print(words);
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(),words.end(),
				[](const string &s1,const string &s2)
				{return s1.size() < s2.size();});
	auto wc = find_if(words.begin(),words.end(),
					[sz](const string &s)
					{return s.size() > sz;});

	auto count = words.end()-wc;

	cout<< count <<" "<< make_plural(count,"words","s")
		<<" of length"<< sz << "or longer"<<endl;
	
	for_each(wc, words.end(),[](const string &str){cout<<str<<" ";});
	cout<<endl;
}
int main()
{
	string str;
	vector<string> words;
	while(cin >> str)
		words.push_back(str);

	biggies(words,3);

	return 0;
}
