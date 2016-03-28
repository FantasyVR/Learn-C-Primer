#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int val;
	vector<int>  vi;
	while(cin >> val)
		vi.push_back(val);


	for(int len = vi.size()-1; len >= 0; len--)
		cout<< vi[len]<<" ";

	cout<< endl;

	return 0;
}
