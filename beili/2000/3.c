#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int iswan(int val)
{
	int tmp = val;
	int sum = 0;
	for(int k = 1; k <val; k++)
		if( val % k == 0)
			sum += k;
	if(sum == val)
		return TRUE;
	else
		return FALSE;
}

int isying(int val)
{
	int tmp = val;
	int sum = 0;
	for(int k = 1; k <val; k++)
		if( val % k == 0)
			sum += k;
	if(sum > val)
		return TRUE;
	else
		return FALSE;
}

int main()
{
	int wan[60],ying[60];
	int m = 0, n = 0;
	for(int i = 2; i <= 60; i++)
	{
		if(iswan(i))
		 wan[m++] = i;
		else if (isying(i))
		 ying[n++] = i;
	}
	printf("E:");
	for(int i = 0; i < m; i++)
		printf("%d ", wan[i] );
	printf("G:");
	for(int i = 0; i < n; i++)
		printf("%d ", ying[i] );
	printf("\n");
	return 0;
}
