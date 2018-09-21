//Implementation of doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
		struct node *prev;
		int data; 
		struct node *next;
	   };
void insertatstart(struct node **,int);
void insertatend(struct node **,int);
void display(struct node *);
void deletefromstart(struct node **);

void main()
{
int ch,num;
struct node *head=NULL;
	while(1)
	{
	printf("Choose operation:\n1.Insert at start\n2.Insert at end\n3.Display\n4.Delete from start\n");
	scanf("%d",&ch);
	switch(ch)
		{
		case 1:
			printf("Enter number:\n");
			scanf("%d",&num);
			insertatstart(&head,num);
			break;
		case 2:
			printf("Enter number:\n");
			scanf("%d",&num);
			insertatend(&head,num);
			break;			
		case 3:
			display(head);
			break;
		case 4:
			deletefromstart(&head);
			break;
		}
	printf("\n");
	}
}

void insertatstart(struct node **p, int n)
{
struct node *temp;
struct node *t;
t=*p;
temp=(struct node *)malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=n;
temp->next=NULL;
	temp->next=t;
	*p=temp;
	temp->prev=NULL;	
}

void insertatend(struct node **p, int n)
{
struct node *temp,*t;				//pointer t is used for traversal 
temp=(struct node *)malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=n;
temp->next=NULL;
t=*p;
if(*p==NULL)
	{
	*p=temp;
	}
else
	{
	while(t->next!=NULL)
		{
		t=t->next;
		}
	t->prev=t;
	t->next=temp;
	}
}

void display(struct node *p)
{
struct node *t;
t=p;
while(t!=NULL)
	{
	printf("--->");
	printf("%d",t->data);
	t=t->next;
	}
}

void deletefromstart(struct node **p)
{
struct node *t;	
t=*p;
if(t==NULL)
	{
	printf("Linked list is empty\n");
	}
else
	{
	*p=t->next;
	t->prev=NULL;
	}
free(t);
display(*p);
} 
