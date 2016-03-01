#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string  str1,str2;
	cin >> str1 >> str2;
	if(str1 == str2)
		cout << "str1 equal str2" << endl;
	else
		cout << "str1 not equal str2"<<endl;

	char s[] = "my world";
	char t[] = "my girl";
	if(strcmp(s,t)==0)
		cout<< "s equal t"<<endl;
	else
		cout << "s not equal t"<<endl;


	return 0;
}
