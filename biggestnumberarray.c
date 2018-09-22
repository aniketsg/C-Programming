//program to find biggest number in an array
#include<stdio.h>
int main()
{
int a[3],x,i,j;
printf("Enter the three numbers:");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}
x=a[0];
for(j=1;j<=2;j++)
{
if(x<a[j])
x=a[j];
}

printf("The biggest number is: %d",x);
return(0);
}


