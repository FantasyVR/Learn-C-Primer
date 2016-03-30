#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
	map<string, size_t> word_count;
	string word;
	while(cin >> word)
		++word_count.insert({word,0}).first->second;
	for(auto &w :word_count)
		cout<< w.first << " occurs "<<w.second
			<<(w.second>1?"times":"time")<<endl;

	return 0;
}
