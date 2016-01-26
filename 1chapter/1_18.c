#include <iostream>
using namespace std;

int main()
{
	int curval = 0,val = 0;
	int count = 0;
	if(cin >> val)
	{
		count = 1;
		while(cin >> curval)
		{
			if(curval == val)
			{
				count++;
			}
			else
			{
				cout<< val <<" occurs "<< count << "times"<<endl;
				val = curval;
				count = 1;
			}
		}
		
		cout<< val <<" occurs "<< count << "times"<<endl;
	}
	return 0;
}
