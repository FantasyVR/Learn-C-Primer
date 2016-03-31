#include <iostream>
#include <string>
#include <memory>

int main()
{

	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef std::unique_ptr<int> IntP;

	//a
	// error: invalid conversion from ‘int’ to ‘std::unique_ptr<int>::pointer {aka int*}’ [-fpermissive]
	//Intr p0(ix);

	//b
	// @brief The code below can compile, but will cause error at run time.
	// 			the reason is that when the unique_ptr p1 is out of scope, delete will
	//			be called to free the object,But the object is not allocate using new.
	//			Thus, an error would be thrown by operating system.
	IntP p1(pi);

	//c error cause dangling pointer
	IntP p2(pi2);

	//d error 
	IntP p3(&ix);

	//e   recommended
	IntP p4(new int(2048));

	//f error double free or corruption at run time
	IntP p5(p2.get());


	return 0;
}
