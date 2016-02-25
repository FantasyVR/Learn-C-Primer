#include <stdio.h>
#include <stdlib.h>
int fibonacci(int val)
{
	if(val == 0)
		return 0;
	else if (val == 1)
		return 1;
	else
		return fibonacci(val-1) + fibonacci(val-2);
}
int main()
{
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	printf("%d\n",fibonacci(n));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<(2*n-1)-(2*i+1); j++)
			printf(" ");
		for(int k=0; k<2*i+1; k++)
			printf("%d ",fibonacci(k));
		printf("\n");
	}
	printf("\n");
	return 0;
}
