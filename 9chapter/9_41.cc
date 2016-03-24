#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<char> vc{'h','e','l','l','o'};
	string s1(vc.begin(),vc.end());
	cout<<s1<<endl;

	return 0;
}
