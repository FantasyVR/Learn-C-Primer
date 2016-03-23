#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	vector<string> linvec;
	ifstream file(argv[1]);
	string str;
	while(getline(file , str))
		linvec.push_back(str);
	
	for(auto t: linvec)
	{
		istringstream iss(t);
		string word;
		while(iss >> word)
			cout<< word<<endl;
	}

	return 0;
}
