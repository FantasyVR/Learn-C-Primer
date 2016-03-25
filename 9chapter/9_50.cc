#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vi = { "12", "34", "100", "28"};
	int sum = 0;
	for(auto &t: vi)
		sum += stoi(t);
	cout<<"The sum: "<< sum <<endl;

	vector<string> vf = {"11.23", "34.23", "67.89", "16.79"};
	float sum1 = 0.0;
	for(auto &it: vf)
		sum1 += stof(it);
	cout<<"The sum1: "<< sum1 <<endl;

	return 0;
}
