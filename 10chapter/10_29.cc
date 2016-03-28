#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main(int argc, char** argv)
{
	ifstream infile(argv[1]);
	vector<string> vs;
	
	istream_iterator<string> is(infile),eof;
	while(is != eof)
		vs.push_back(*is++);

	for(auto &t : vs)
		cout<< t << " ";
	cout<<endl;

	return 0;
}
