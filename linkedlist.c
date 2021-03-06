//linked list implementation
#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node *next;
	   };
void insertatend(struct node **, int);
void insertatstart(struct node **, int);
void display(struct node *);
void deletefromstart(struct node **);
void deletefromend(struct node **);
void revdisplay(struct node *);

void main()
{
struct node *head=NULL;
int num,ch;
	while(1){
		printf("Choose operation to perform:\n1.Insert at end\n2.Insertatstart\n3.Display\n4.Reverse Display\n5.Delete from start\n6.Delete from end\n7.Exit\n");
		scanf("%d",&ch);

		switch(ch)
			{
			case 1:
				printf("Enter the number:\n");
				scanf("%d",&num);
				insertatend(&head,num);
				break;
			case 2:
				printf("Enter the number:\n");
				scanf("%d",&num);
				insertatstart(&head,num);
				break;
			case 3:
				display(head);	
				break;
			case 4:
				revdisplay(head);
				break;
			case 5:
				deletefromstart(&head);
				break;
			case 6:
				deletefromend(&head);
				break;			
			case 7:
				exit(1);
			default:
				printf("Invalid choice entered! Please try again!\n");
				break;
			}
		}
}

void insertatend(struct node **p,int n)
{
	struct node *t;
	t=*p;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
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
			t->next=temp;
			}
}

void insertatstart(struct node **p, int n)
{
struct node *temp,*t;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=n;
temp->next=NULL;
	if(*p==NULL)
		{
		*p=temp;	
		}
	else
		{
		t=*p;
		*p=temp;
		temp->next=t;
		}
}

void display(struct node *pd)
{

		while(pd!=NULL)
		{
		printf("---->");
		printf("%d",pd->data);
		pd=pd->next;
		}
printf("\n");	
}

void revdisplay(struct node *t)
{
	if(t->next!=NULL)
	{
	revdisplay(t->next);
	}
	printf("--->%d",t->data);
}

void deletefromstart(struct node **pd)
{
	struct node *t;
	t=*pd;
	if(*pd==NULL)
		{
		printf("Linked list is empty!\n");
		}
	else
		{
		*pd=t->next;			//assigning head pointer to next node
		free(t);
		display(*pd);
		}
}

void deletefromend(struct node **p)
{
struct node *t;
t=*p;
if(*p==NULL)
	{
	printf("Linked list is empty!\n");
	}
else
	{
	while(t->next->next!=NULL)
		{
		t=t->next;
		}
	t->next=NULL;
	display(*p);
	}
}
