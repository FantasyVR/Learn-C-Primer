#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<string> p(new string("hello"));
//	unique_ptr<string> p1(p);    //error deleted function

//	unique_ptr<string> p2 = p;  //error: use deleted function

	cout<< *p <<endl;

	p.reset(nullptr);
	return 0;
}
