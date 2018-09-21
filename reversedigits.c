//program to reverse a three digit number
#include<stdio.h>
int main()
{
int a,x,y,z,b;
printf("Enter the three digit number:");
scanf("%d",&a);
x=a/100;
y=(a%100)/10;
z=a%10;
b=100*z+10*y+x;
printf("x=%d y=%d z=%d",x,y,z);
printf("The reversed number is: %d\n",b);
return(0);
}


