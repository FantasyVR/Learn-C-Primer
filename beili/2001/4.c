#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node{
	int num;
	struct node *next;
}LNode;

int main()
{
	LNode *head, *p, *q;
	int N;
	scanf("%d",&N);
	
	p = (LNode *)(malloc(sizeof(LNode)));
	p->num = 1;
	head = p;

	for(int i=1; i<N; i++)
	{
		p->next = (LNode *)(malloc(sizeof(LNode)));
		p = p->next;
		p->num = i+1;
	}
	p->next = head;
	p = head;

	printf("the sequence:\n");
	while(p->next != p)
	{
		q = p->next;
		p = q->next;
		q->next = p->next;
		printf("%d ",p->num);
		//delete p;
		p = q->next;
	}
	printf("\n");
	return 0;
}
