#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x;
	scanf("%lf",&x);
	if( x < 0 || x >= 6)
		printf("Input error number\n");
	if(x < 2)
		printf("y = %.3lf\n", 2.5-x);
	else if( x < 4)
		printf("y = %.3lf\n", 2-1.5*(x-3)*(x-3));
	else if(x < 6)
		printf("y = %.3lf\n",x/2-1.5);
	return 0;
}
