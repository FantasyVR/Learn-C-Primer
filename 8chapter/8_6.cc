#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Sale_data.h"
using namespace std;

int main(int argc, char **argv)
{
	Sale_data total;
	ifstream in(argv[1]);
	ofstream out("output.txt");
	if(read(in, total))
	{
		Sale_data trans;
		while(read(in, trans))
		{
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(out, total);
				cout<<endl;
				total = trans;
			}
		}
		print(out, total);
		cout<<endl;
	}
	else
	{
	  cerr<<" no input"<<endl;
	  return -1;
	}


	return 0;
}
