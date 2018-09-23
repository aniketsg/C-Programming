//Program to implement cicular linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void insert(struct node **p,int);
void display(struct node *p);
void delete(struct node **p);

void main()
{
	int ch,num;
	struct node *head=NULL;
	while(1)
		{
		printf("Enter Choice:\n1.Insert\n2.Display\n3.Delete\n");
		scanf("%d",&ch);
		switch(ch)
			{
				case 1:
				printf("Enter number to be entered:\n");
				scanf("%d",&num);
				insert(&head, num);
				break;
				case 2:
				display(head);
				break;
				case 3:
				delete(&head);
				break;
				default:
				exit(1);
				break;	
			}
		}
}

void insert(struct node **p, int num)
{
	struct node *t,*temp;
	t=*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=num;
		if(*p==NULL)
		{
			*p=temp;
		} 
		else
		{
			while(t->next!=*p)
				{
					t=t->next;
				}
			t->next=temp;
			temp->next=t;
		}
	temp->next=*p;
}

void display(struct node *p)
{
	struct node *t;
	t=p;
	if(p==NULL)
		{
			return;
		}
	else{
		do
		{
		printf("--->%d", t->data);
		t=t->next;
		}while(t!=p);
		printf("\n");
	    }
}

void delete(struct node **p)
{
	struct node *t;
	t=*p;
	if(t==NULL)
		{
			printf("Linked list is empty!\n");
			return;
		}

	if(t->next==*p)
		{
			*p=NULL;
			return;	
		}
	
	while(t->next->next!=*p){
					t=t->next;
				}
		t->next=*p;
		display(*p);
}
