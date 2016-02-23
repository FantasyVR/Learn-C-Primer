#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[10];
	int age;
	int grade;
};
int main(){
	struct student stu[4];
	struct student *s;
	s = stu;	
	FILE *fp;
	fp = fopen("sf1","wr");
	
	for(int i = 0; i < 4; i++,s++)
	{
		scanf("%s %d %d", s->name, &s->age, &s->grade);
		fprintf(fp,"%s %d %d\n", s->name, s->age, s->grade);
	}
	rewind(fp);
	s = stu;
	for(int i = 0; i < 4; i++,s++)
	{
		fscanf(fp,"%s %d %d",s->name, &s->age, &s->grade);
		//printf("%s %d %d\n", s->name, s->age, s->grade);
	}

	//sort algorithm
	for(int i=0; i<4; i++)
		for(int j=i+1;j<4;j++)
		{
				
			if(stu[i].grade < stu[j].grade)
			{
				struct student s = stu[i];
				stu[i] = stu[j];
				stu[j] = s;
			}
		}
	
	s = stu;
	printf("after sort\n");
	for(int i = 0; i < 4; i++,s++)
		printf("%s %d %d\n", s->name, s->age, s->grade);

	fclose(fp);
	
	return 0;
}
