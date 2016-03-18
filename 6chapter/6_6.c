#include <iostream>
using namespace std;
int func(int va)
{
	static int ss = 0;
	cout <<"ss:"<< ++ss <<endl;

	int tva = 0;
	cout<< "tva:"<< tva <<endl;
	
	return va*2;
}
int main()
{
	int val;
	cin >> val;
	for(int i=0; i<4; i++)
	{
		int result = func(val);
		cout<<i<<"result:"<<result<<endl;
	}
	return 0;
}
