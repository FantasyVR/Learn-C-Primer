#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> count(11,0);
	int val;

	while(cin >> val)
	{
		if(val <= 100)
		{
				int s = val/10;
				auto it = count.begin() + s - 1;
				(*it)++;
		}
	}
	
	for(auto it1 = count.begin(); it1 != count.end(); it1++)
		cout << *it1 << endl;

	return 0;
}
