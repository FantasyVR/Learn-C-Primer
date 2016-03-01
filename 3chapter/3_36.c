#include <iostream>
using namespace std;

int main()
{
	int arr1[10]={1,2,3,4,5,6};
	int arr2[10]={0,2,3,4,5,6};
	int i=0;
	for(; i<10; i++)
	{
		if(arr1[i] != arr2[i])
		{
			cout<< "Different"<<endl;
			break;
		}
	}
	if(i==10)
		cout<<"The same arr"<<endl;

	return 0;
}
