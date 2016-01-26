#include <iostream>

int main()
{
	std::cout<< "/*";		//legal
	std::cout<< "*/";		//legal
	std::cout<< /*"*/ " */;  // this statement is illegal
	std::cout<< /* "*/ "/*" /* " */;//legal
}
