#include <iostream>
using namespace std;
void print(const int *p)
{
	if(p)
		cout<< *p <<" ";
	cout<<endl;
}
void print(const char *p)
{
	if(p)
		while(*p)
			cout<<*p++ <<" ";
	cout<<endl;
}
void print(const int *begin,const int *end)
{
	while(begin != end)
		cout<< *begin++ <<" ";
	cout<<endl;
}
void print(const int arr[], size_t size)
{
	for(size_t i=0; i<size; ++i)
		cout<< arr[i] <<" ";
	cout<<endl;
}
void print(int (&arr)[2])
{
	for(auto elem: arr)
		cout<< elem <<" ";
		
	cout<<endl;
}
int main()
{
	int i=0, j[2] = {89,120};
	char ch[4] = "hip";	

	print(&i);
	print(ch);
	print(begin(j), end(j));
	print(j,2);
	print(j);

	return 0;
}
