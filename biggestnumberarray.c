//program to find biggest number in an array
#define SIZE 5
#include<stdio.h>
int main()
{
int a[SIZE],x,i,j;
printf("Enter the numbers:");
for(i=0;i<=SIZE-1;i++)
{
scanf("%d",&a[i]);
}
x=a[0];
for(j=1;j<=SIZE-1;j++)
{
if(x<a[j])
x=a[j];
}

printf("The biggest number is: %d",x);
return(0);
}


