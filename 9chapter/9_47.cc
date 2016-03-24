#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("ab2c3d7R4E6"),num("0123456789");
	string::size_type pos=0;
	while(( pos=str.find_first_of(num,pos))!=string::npos)
	{
		cout<< str[pos] <<" ";
		pos++;
	}
	cout<<endl;

	pos = 0;
	while(( pos=str.find_first_not_of(num,pos))!=string::npos)
	{
		cout<<str[pos] <<" ";
		pos++;
	}
	cout<<endl;	
	return 0;
}
