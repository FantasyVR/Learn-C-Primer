#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val;
	scanf("%d",&val);
	printf("%d\n",(val+2*val)*(abs(val)+1)/2);
	return 0;
}
