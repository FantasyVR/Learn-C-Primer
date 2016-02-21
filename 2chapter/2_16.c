#include <iostream>

int main()
{
	int i = 0.11, &r1 = i;
	double d = 0, &r2 = d;

	r2 = 3.142323;
	r2 = r1;
	std::cout << r2 << std::endl;

	i = r2;
	std::cout << i << std::endl;

	r1 = d;
	std::cout << r1 << std::endl;

	int a = -1, &r = 0;
	int *const p2 = &a;
	const int j = -1, &r22 = 0;
	const int *const p3 = &a;
	const int *p1 = &a;
	const int i2 = a, &r8 = a;
	return 0;
}
