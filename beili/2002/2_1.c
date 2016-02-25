#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t,x;
	char s[10];
	for(int i=1; i<256; i++)
	{
		int j = 0;
		x = i * i ;
		while(x)
		{
			t = x%10;
			s[j++] = t + 48;
			x/=10;
		}
		s[j] = '\0';
		if( i * i == atoi(s))
			printf("%d ",i);
	}
	printf("\n");

	return 0;
}
