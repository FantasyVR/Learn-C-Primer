#include <iostream>
bool b()
{
	int* p = new int;

	return p;
}
int main()
{
	//This work but the dynamic memory allocated has no chance to be freed.
	// So memory leakage might occur;
	bool t = b();
	std::cout<< std::boolalpha <<t << std::endl;
	return 0;
}
