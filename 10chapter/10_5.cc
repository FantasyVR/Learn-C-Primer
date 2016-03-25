#include <numeric>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char *> roster1 = {"hello","world"}, roster2 = {"hello","world"};

//	vector<string> r1 = {"hello","man"}, r2 = {"hello","mom"};

	if(equal(roster1.begin(),roster1.end(),roster2.begin()))
		cout<<"roster1 is equal roster2"<<endl; 
	else
		cout<<"roster1 is not equal roster2"<<endl;
	//if(equal(r1.begin(),r1.end(),r2.begin()))
	//	cout<<"r1 is equal r2"<<endl; 
	//else
	//	cout<<"r1 is not equal r2"<<endl;
	return 0;	
}
