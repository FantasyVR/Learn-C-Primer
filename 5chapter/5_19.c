#include <iostream>

using namespace std;

int main()
{
	string str1,str2;

	cout<< "Please input two str"<< endl;
	cin>> str1 >> str2;

	do{
		string s = str1.size() > str2.size()? str2:str1;
		cout<< s << endl;
	}while(cin>> str1 >> str2);


	return 0;
}
