//program to copy one string to another using memcopy
#include<stdio.h>
#include<string.h>

void main()
{
int i;
int arr1[]={1,2,3};
int arr2[]={0,0,0};
printf("Arr1 :\n");
for(i=0;i<3;i++)
{
printf("%d\t",arr1[i]);
}
printf("\n");
printf("Arr2 before memcpy:\n");
for(i=0;i<3;i++)
{
printf("%d\t",arr2[i]);
}
printf("\n");
memcpy(arr2,arr1,sizeof(arr1));		//copying arr1 to arr2
printf("Arr2 after memcpy:\n");
for(i=0;i<3;i++)
{
printf("%d\t",arr2[i]);
}
printf("\n");
}
