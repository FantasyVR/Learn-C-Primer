#include <stdio.h>
#include <stdlib.h>

int isLeap(int year)
{
	if(year%400==0 || (year%4==0 && year%100!=0))
		return 1;
	else
		return 0;
}
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};


int main()
{
	int y,m,d;
	printf("Please input year,month,day\n");
	scanf("%d %d %d",&y,&m,&d);
	int il = isLeap(y);
	int sum = 0;
	for(int i=0; i<m-1; i++)
		sum += month[i];	
	if(il)
		sum++;
	sum += d;

	printf("%d year,%d month, %d day is the %dth day\n",y,m,d,sum);

	return 0;
}
