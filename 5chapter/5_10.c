#include <iostream>
using namespace std;

int main()
{
	char ch;
	unsigned int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0;
	while(cin >> ch)
	{
		if(ch == 'a' || ch == 'A')
			acnt++;	
		if(ch == 'e' || ch == 'E')
			ecnt++;
		if(ch == 'i' || ch == 'I')
			icnt++;
		if(ch == 'o' || ch == 'O')
			ocnt++;
		if(ch == 'u' || ch == 'U')
			ucnt++;
	}
	cout<< "acnt:"<< acnt <<endl;
	cout<< "ecnt:"<< ecnt <<endl;
	cout<< "icnt:"<< icnt <<endl;
	cout<< "ocnt:"<< ocnt <<endl;
	cout<< "ucnt:"<< ucnt <<endl;
	return 0;
}
