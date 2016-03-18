#include <iostream>
#include <math.h>
using namespace std;
class angle
{
private:
	int x;
public:
	angle (int);
	double dsin();

};

angle::angle(int k)
{
	x=k;
	cout<<x<<endl;
}

double angle::dsin()
{
	double i;
	i = sin(x);
	cout<<i<<endl;
	return i;
}


int main()
{
		angle a(30);
		double b = a.dsin();
		
		return 0;
}
