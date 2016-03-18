#include <iostream>
using namespace std;

int main()
{
	char ch;
	unsigned int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0,space=0,tab=0,enter=0;
	//noskipws means Do Not Skip the WhiteSpace;
	while(cin >> std::noskipws >>  ch)
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
		if(ch == ' ')
			space++;
		if(ch == '\t')
			tab++;
		if(ch == '\n')
			enter++;
	}
	cout<< "acnt:"<< acnt <<endl;
	cout<< "ecnt:"<< ecnt <<endl;
	cout<< "icnt:"<< icnt <<endl;
	cout<< "ocnt:"<< ocnt <<endl;
	cout<< "ucnt:"<< ucnt <<endl;
	cout<< "space:"<< space<<endl;
	cout<< "table:"<< tab<<endl;
	cout<< "enter:"<< enter<<endl;
	return 0;
}
