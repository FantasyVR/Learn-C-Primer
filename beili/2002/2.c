#include <stdio.h>
#include <stdlib.h>
int fun(int n, int k)
{
	if( k==0 || n==k)
		return 1;
	else
		return fun(n-1,k-1)+fun(n-1,k);
}
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(int k=0; k<n-i+1;k++)
			printf(" ");
		for(j=0; j<=i; j++)
			printf("%d ",fun(i,j));			
		printf("\n");
	}
	printf("\n");
}
