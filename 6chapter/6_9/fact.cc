#include "Chapter6.h"

int fact(int val)
{
	if(val==1)
		return 1;
	else
		return val*fact(val-1);
}


int fac(int val)
{
	int ret=1;
	
	while(val > 1)
		ret *= val--;

	return ret;
}
