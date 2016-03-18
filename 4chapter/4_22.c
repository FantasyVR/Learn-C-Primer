#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//int grade;
	//while(cin >> grade)
	//{
	//	if(grade > 90)
	//		cout<< "high pass" << endl;
	//	else if(grade > 75)
	//		cout<< "pass"<< endl;
	//	else if(grade > 60)
	//		cout<< "low pass" << endl;
	//	else
	//		cout<< "failed" << endl;
	//}

	//version 2
	int gg;
	while(cin >> gg)
	{
	
		cout<< (gg>90?"high pass":gg>75?"pass":gg>60?"low pass":"failed")<<endl;
	}
	return 0;
}
