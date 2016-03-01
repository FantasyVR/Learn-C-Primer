#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[10];
	int arr1[10];
	for(int i=0; i<10; i++)
		arr[i] = i;
	for(int i=0; i<10; i++)
	{
		arr1[i] = arr[i];
		cout<<arr[i] << " " <<endl;
	}




	vector<int> vec(10,0);
	for(int i=0; i<10; i++)
	{
		vec[i] = i;
		cout << vec[i]<< endl;	
	}
	return 0;
}
