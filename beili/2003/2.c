#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
	char num[5];
	char name[100];
	char sex[5];
	int age;
};

int main()
{
	FILE *fp;
	fp = fopen("data.txt","r");
	
	struct Student student[10];
	struct Student *st = student;
	printf("please input the total number of students\n");
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++,st++)
		fscanf(fp,"%s %s %s %d",st->num,st->name,st->sex,&st->age);
	fclose(fp);	

	printf("please input student ID that you wanna know\n");
	char stuId[5];
	scanf("%s",stuId);
	st = student;
	for(int i=0; i<N;i++,st++)
		if(strcmp(student[i].num,stuId)==0)
		printf("the information of this student:ID:%s,name:%s,sex:%s,age:%d\n",\
		st->num,st->name,st->sex,st->age);

	return 0;
}
