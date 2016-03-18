#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strnow;
	string strpre = " ";
	bool flag = false;
	while(cin >> strnow)
	{
		if(strnow == strpre)
		{
			cout<< strnow << endl;
			flag = true;
			break;
		}
		strpre = strnow;
	}
	if(!flag)
		cout<< "No the same str"<<endl;

	return 0;
}
