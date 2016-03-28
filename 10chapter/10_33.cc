#include  <iostream>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;

int main(int argc, char **argv)
{
	ifstream infile(argv[1]);
	ofstream ofile1(argv[2]),ofile2(argv[3]);

	istream_iterator<int> is(infile),eof;
	ostream_iterator<int> out1(ofile1," "),out2(ofile2," ");

	vector<int> vi(is,eof);

	for(auto &i : vi)
		if( i & 0x1)
			*out1++ = i;
		else
			*out2++ = i;


	return 0;
}
