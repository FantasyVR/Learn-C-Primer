#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str= "12/10/1990";
	size_t pos = str.find_first_of("/");
	cout<<pos<<endl;
	string month = str.substr(0,pos);
	size_t pos1 = str.find_first_of("/",pos+1);
	cout<< pos1<<endl;
	string day =  str.substr(pos+1,pos1-pos-1);
	string year = str.substr(pos1+1,str.size());
	cout<< "month"<<month
		<<" day " << day
		<<" year " <<year<<endl;

	return 0;
}
