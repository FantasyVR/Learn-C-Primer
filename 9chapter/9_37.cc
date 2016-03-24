#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	for(int val; cin>>val; vec.push_back(val))
		cout<<"capacity:"<< vec.capacity() 
			<<"size: "<<vec.size() <<endl;

	return 0;
}
