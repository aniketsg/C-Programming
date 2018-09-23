//Program to implement queue using array
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void push(int q[], int, int *, int *);
void pop(int q[], int *, int *);
void display(int q[]);

void main()
{
	int i,ch,num;
	int rear=-1, front=-1;
	int q[SIZE]={0,0,0,0,0};

	while(1)
		{
		printf("Enter choice:\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf("%d", &ch);
		switch(ch)
			{
				case 1:
					printf("Enter number to push on stack:\n");
					scanf("%d", &num);
					push(q, num, &front, &rear);
					break;
				case 2:
					pop(q, &front, &rear);
					break;
				case 3:
					display(q);
					break;
				case 4:
				       exit(1);
			       	default:
					printf("Invalid choice entered! Please try again!\n");
			 		break;		
			}
		}
}

void push(int q[], int num, int *f, int *r)
{
	if(*r==SIZE-1)
		{
		printf("Queue is full!");
		return;
		}
	else{
		(*r)++;
		q[*r]=num;
		if(*f==-1)		//when queue is empty, make front pointer point to first element
		{
			*f=0;
		}
       	    }
}

void pop(int q[], int *f, int *r)
{
	if(*f==-1)
		{
		printf("Queue is empty!\n");
		return;
		}
	int temp=q[(*f)];
	printf("--->%d<---\n", temp);
	q[(*f)]=0;
	if(*r==*f)
		{
		*r=-1;
		*f=-1;
		}
	else{
		(*f)++;
            }
}

void display(int q[])
{
	int i;
	for(i=0;i<SIZE;i++)
		{
		printf("%d\t", q[i]);
		}
	printf("\n");
}
