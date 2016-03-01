#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "hello,how do you do?  ";
	char str2[] = "it's nice to see you again!";

	char str3[100];

	strcpy(str3,str1);
	strcat(str3,str2);

	cout<< str3 <<endl;


	return 0;
}
