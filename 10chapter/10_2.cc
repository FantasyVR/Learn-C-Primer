#include <iostream>
#include <vector>
#include <string>
using namespace std;
unsigned int count(vector<string>::iterator begin,vector<string>::iterator end, string val)
{
	unsigned int con = 0;
	for(;begin != end; ++begin)
		if( *begin == val)
			++con;

	return con;
}
int main()
{
	vector<string> vec = {"hi","hi","hello","world"}; 
	string val = "hi";
	unsigned int conval = count(vec.begin(),vec.end(),val);
	
	cout<<"The count of val:"<<conval<<endl;

	return 0;
}
