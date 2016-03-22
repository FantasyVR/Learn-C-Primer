#include <iostream>
#include <vector>

class NoDefault{
public:
	NoDefault( int val):value(val){}

private:
	int value;
};

class C{
public:
	C():nd(0){}
private:
	NoDefault nd;
};


int main()
{
 
	C c;
//	std::vector<C> vec(10);

	std::vector<NoDefault> vec(10); //Wrong 
	std::vector<NoDefault> vec{10}; //Right
	return 0;
}
