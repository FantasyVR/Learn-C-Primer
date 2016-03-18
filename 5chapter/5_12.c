#include <iostream>
using namespace std;

int main()
{
	char ch;
	unsigned f=0, l=0, i=0;
	while(cin >> std::noskipws >> ch)
	{
		if(ch == 'f')
		{
			 	cin >> std::noskipws >>ch;
				switch(ch)
				{
					case 'f':
						f++;
						break;
					case 'l':
						l++;
						break;
					case 'i':
						i++;
						break;
					default:
						;
				}
		}
	}
	cout<< "ff:" << f <<endl;
	cout<< "fl:" << l <<endl;
	cout<< "fi:" << i <<endl;
	return 0;
}
