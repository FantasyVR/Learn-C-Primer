#include <iostream>
using namespace std;

int main()
{
	int grade;
	while(cin >> grade)
	{
		string result;
		result = grade>95?"A++":grade>90?"A":grade>80?"B":grade>70?"C":grade>60?"D":"F";
		cout<< result << endl;
	}
	return 0;
}

