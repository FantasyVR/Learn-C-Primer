#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h;
	scanf("%d",&h);
	for(int i=0; i<h; i++)
	{
		for(int j=0; j<h-i-1;j++)
			printf(" ");
		for(int k=0; k<h+2*i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
