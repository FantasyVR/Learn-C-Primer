#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Input 4 char\n");
	char str[4];
	scanf("%s", str);

	for(int i = 3; i >= 0; i--)
		printf("%c",str[i]);

	printf("\n");

	return 0;
}
