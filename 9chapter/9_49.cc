#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char **argv)
{
	ifstream file(argv[1]);	

	string word;
	string maxWord=" ",regex = "bdfghjklpqty";
	size_t maxlen = 0;
	while(file >> word)
	{
		if(string::npos == word.find_first_of(regex))	
		{
			if(word.size() > maxlen)
			{
				maxWord = word;
				maxlen = word.size();
			}
		}
	}

	cout<< "max len word: "<< maxWord<<endl;

	return 0;
}
