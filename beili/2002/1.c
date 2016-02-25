#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 0;
	for(int i=0; i<=5; i++)
		for(int j=0; j<=4;j++)
			for(int k=0; k<=6; k++)
			{
				printf("%.2lf\n",0.8*i+j+1.8*k);
				count++;
			}
	printf("There are %d's kind of combinations\n",count);
	return 0;
}
