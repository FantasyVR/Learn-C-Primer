#include <iostream>

using namespace std;

int main()
{
	int arr[10];
	int *p = arr;
	for(;p!=&arr[10]; p++)
		*p = 0;
	for(int i=0; i<10; i++)
		cout<< arr[i] << " ";
	return 0;
}
