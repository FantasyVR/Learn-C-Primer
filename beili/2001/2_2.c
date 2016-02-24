#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n<1 || n>20)
	{
		printf("Please input number 1~20\n");
		return -1;
	}
	int val = 1;
	for(int i=1; i<=n; i++)
		val = val * i;
	printf("%d\n",val);
	return 0;
}
