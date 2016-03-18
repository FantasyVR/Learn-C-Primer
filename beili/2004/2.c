#include <iostream>
#include <cmath>

using namespace std;

class Root{
	int a,b,c;
public:
	Root(){}
	Root(int m, int n, int k):a(m),b(n),c(k){}

	void root();
};

void Root::root()
{
	if(a==0)
		cout<< "ERROR! a cannot be zero!" <<endl;

	else{
		double delta = b*b - 4 * a * c;
		if(delta == 0)
			cout<<"The root is "<<-b/(2*a)<<endl;
		else if (delta < 0)
			cout<< "No root" <<endl;
		else
			cout <<"The first root is:"<<(-b+sqrt(delta))/(2*a)<< "\n"
				<<"The seconde root is:"<<(-b-sqrt(delta))/(2*a)<<endl;
	}
	
}

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	Root r(a,b,c);
	r.root();


	return 0;
}
