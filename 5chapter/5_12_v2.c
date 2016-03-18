#include <iostream>
using namespace std;

int main()
{
	char ch, prch=' ';
	unsigned int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0,space=0,tab=0,enter=0,ffcnt=0,flcnt=0,ficnt=0;
	//noskipws means Do Not Skip the WhiteSpace;
	while(cin >> std::noskipws >> ch)
	{
	
		switch(ch)
		{
			case 'a':
			case 'A':
				acnt++;
				break;
			case 'e':
			case 'E':
				ecnt++;
				break;
			case 'i':
				if(prch == 'f') ficnt++;
			case 'I':
				icnt++;
				break;
			case 'o':
			case 'O':
				ocnt++;
				break;
			case ' ':
				space++;
				break;
			case '\t':
				tab++;
				break;
			case '\n':
				enter++;
				break;
			case 'f':
				if(prch == 'f') ffcnt++;
			case 'l':
				if(prch == 'f') flcnt++;
			default:	
				;
		}
		prch = ch;
	}
	cout<< "acnt:"<< acnt <<endl;
	cout<< "ecnt:"<< ecnt <<endl;
	cout<< "icnt:"<< icnt <<endl;
	cout<< "ocnt:"<< ocnt <<endl;
	cout<< "ucnt:"<< ucnt <<endl;
	cout<< "space:"<< space <<endl;
	cout<< "table:"<< tab <<endl;
	cout<< "enter:"<< enter <<endl;
	cout<< "ffcnt:"<< ffcnt <<endl;
	cout<< "flcnt:"<< flcnt <<endl;
	cout<< "ficnt:"<< ficnt <<endl;
	return 0;
}
