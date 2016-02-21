#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	//compare two string with different length
	string s1, s2;
	cin >> s1 >> s2;
	if(s1 != s2 )
	{
			if(s1 > s2)
				cout << s1 <<endl;
			else
				cout << s2 << endl;
	}	
	//compare two string with the same length
	string s3, s4;
	cin >> s3 >> s4;
	if(s3.size() != s4.size() )
	{
			if(s3.size() > s4.size() )
				cout << s3 << endl;
			else
				cout << s4 << endl;
	}	
	return 0;

}
