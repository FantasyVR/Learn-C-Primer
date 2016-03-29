#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::remove_if;
using std::ifstream;
using std::map;
using std::set;


int main(int argc, char **argv)
{
	ifstream infile(argv[1]);	

	map<string,size_t> word_count;
	string word;
	while(infile >> word)
	{
		for(auto &ch: word)
			ch = tolower(ch);	
		word.erase(remove_if(word.begin(),word.end(),ispunct),word.end());
		++word_count[word];
	}

	for(auto &w: word_count)
		cout<< w.first <<" occurs "<< w.second
			<<(w.second>1?"times":"time")<<endl;

	return 0;
}
