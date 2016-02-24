#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[20] = "";
	scanf("%20s",str);
	printf("the input str:%s\n",str);
	int  len = 0;
	while(str[len]!= 0 && len<20) len++;
	printf("the length of  str:%d\n",len);
	for(int i=0; i<len;i++)
		for(int j=i+1; j<len;j++)
			if(str[i]>str[j])
			{
				char c = str[i];
				str[i] = str[j];
				str[j] = c;
			}
	printf("After sort:%s\n",str);
}
