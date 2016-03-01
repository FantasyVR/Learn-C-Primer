#include <string>
#include <iostream>
using std::string;
using namespace std;

int main()
{
	string s1 = "hello";

	for(auto &c : s1 )
		c = toupper(c);
	cout << s1 << endl;
	
	int arr[12-2];

	string ss;
	cout << ss[0] << endl;
	return 0;
}
