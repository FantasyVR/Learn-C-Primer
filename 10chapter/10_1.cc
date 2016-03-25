#include <iostream>
#include <vector>
using namespace std;
unsigned int count(vector<int>::iterator begin,vector<int>::iterator end, int val)
{
	unsigned int con = 0;
	for(;begin != end; ++begin)
		if( *begin == val)
			++con;

	return con;
}
int main()
{
	vector<int> vec = { 1, 5,5,5,2, 3, 4, 5, 6, 7, 8, 9,};
	int val = 5;
	unsigned int conval = count(vec.begin(),vec.end(),val);
	
	cout<<"The count of val:"<<conval<<endl;

	return 0;
}
