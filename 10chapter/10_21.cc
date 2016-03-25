#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int val = 5;
	auto check_and_decres = [&val](){ return --val? false:true;};
	while(!check_and_decres())
		cout<< val <<" ";
	cout<< val <<endl;


	return 0;
}
