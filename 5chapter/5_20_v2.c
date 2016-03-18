#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strnow;
	string strpre = " ";
	
	while(cin >> strnow)
		if(strnow == strpre) break;
		else strpre = strnow;
	
	if(cin.eof()) cout<< "No word was repeated"<<endl;
	else cout<< strnow <<endl;

	return 0;
}
