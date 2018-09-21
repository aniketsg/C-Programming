#include<stdio.h>
int main()
{
int a,b;
printf("Enter first number:\n");
scanf("%d",&a);
printf("Enter second nymber:\n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("The swapped numbers are a=%d and b=%d",a,b);
return(0);
}
