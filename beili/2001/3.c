#include <stdio.h>
#include <stdlib.h>

int main()
{
	for(int i=1000; i<10000; i++)
	{
		int a, b, c, d;
		a = i /1000;
		b = i /100 - a * 10;
		c = (i/10)%10;
		d = i % 10;
//		printf("%d %d %d %d\n",a,b,c,d);	

		if(9*i == d*1000+c*100+b*10+a)
		  printf("%d\n",i);
	}
	return 0;
}
