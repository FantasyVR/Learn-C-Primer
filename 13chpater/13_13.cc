#include <iostream>
#include <vector>
struct X
{
	X() {std::cout<< "X()" << std::endl;}
	X(const X&) {std::cout<< "X(const X&)"<<std::endl;}
	//copy-assignment constructor
	X& operator=(const X&){std::cout<< "X& operateor=(const &X)"<< std::endl; return *this;}
	//destructor
	~X() {std::cout<< "~X()"<< std::endl;}

};
void f(X &rx, X x)
{
	std::vector<X> vec;
	vec.reserve(2);
	vec.push_back(rx);
	vec.push_back(x);
}
int main()
{
	X *px = new X;
	X *dx = new X;
	std::cout<< "before f"<<std::endl;
	f(*px, *dx);

	std::cout<< "after f"<<std::endl;
	X ox ;
	ox = *px;

	std::cout<<"will delete px"<<std::endl;
	delete px;
	
	return 0;
}
