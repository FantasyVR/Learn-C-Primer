/*
*	Author: RV
* 	Day	  : 2016/3/15
*   
*   Init a vector object with an int array.
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int arry[] = {1,2,3,4,5,6,7,8,9};
	vector<int> ve(begin(arry),end(arry));

	vector<int>::iterator it;
	for(it = ve.begin(); it!= ve.end(); it++)
		std::cout<<*it << " ";

	std::cout<<endl;

	return 0;
}
