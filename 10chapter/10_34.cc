#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	vector<int> vi;
	int val;
	while(cin>>val)
		vi.push_back(val);

	for(auto rb = vi.crbegin(); rb != vi.crend(); rb++)
		cout<< *rb <<endl;

	return 0; 
}
