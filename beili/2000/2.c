#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	for(int i=0; i<1000; i++)
	{
		a = i/100;
		b = i/10 - a*10;
		c = i % 10;

		int bcc = b * 100 + c * 10 + c;

		if(i + bcc == 532)
		{
			printf("%d %d %d\n",a,b,c);
		}
	}
	return 0;
}
