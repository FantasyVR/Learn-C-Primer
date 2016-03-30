#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	ifstream infile(argv[1]);	

	unordered_map<string,size_t> word_count;
	string word;
	while(infile >> word)
		++word_count[word];

	for(auto &w: word_count)
		cout<< w.first <<" occurs "<< w.second
			<<(w.second>1?" times":" time")<<endl;

	return 0;
}
