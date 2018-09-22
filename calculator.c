//program to implement a simple calculator
#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
float c,x,y;
void main()
{
float a,b,sol=0;
int ch;
while(1)
{
	printf("enter first number\n");
	scanf("%f",&a);
	printf("enter second number\n");
	scanf("%f",&b);
	printf("enter the operation to be performed 1.add,2.sub,3.mul,4.div\n5.Exit");
	scanf("%d",&ch);
		switch(ch){
		case 1:
		sol=add(a,b);
		break;
		case 2:
		sol=sub(a,b);
		break;
		case 3:
		sol=mul(a,b);
		break;
		case 4:
		sol=div(a,b);
		break;
		case 5:
		exit(1);
		break;
		default:
		printf("Wrong choice entered!");
		}
	printf("Result: %f\n",sol);
	}
}

float add(float x, float y)
{
c=x+y;
return(c);
}


float sub(float x, float y)
{
c=x-y;
return(c);
}


float mul(float x, float y)
{
c=x*y;
return(c);
}


float div(float x, float y)
{
c=x/y;
return(c);
}
