#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void print(const int ia[10])
{
	for(size_t i=0; i!=10; ++i)
		cout<< ia[i] <<endl;
//	for(auto elem: ia)
//		cout<< elem <<endl;

}
int main()
{
	int arr[12] = {2,3,4,5,6,7,8,9,0};

	print(arr);

	return 0;
}
