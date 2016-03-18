#include <iostream>
#include <cmath>

using namespace std;

double const PI = 3.1415926;

class angle{

	int X;
public:
	void xsin();
	angle(){};
	angle(int x){X = x;}
	angle operator-(angle c);
};

angle angle::operator-(angle c)
{
	return angle(X-c.X);
}

void angle::xsin()
{
	double x = X * PI /180;
	cout<<"the sin value is :"<<sin(x)<<endl;
}
int main()
{
	angle a(30),b(60),d;
	a.xsin();
	b.xsin();
	d = b-a;
	d.xsin();
	return 0;
}
