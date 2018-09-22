//program to copy one string to another using memcopy
#include<stdio.h>
#include<string.h>

void main()
{
char str1[10];
char str2[10];
printf("Enter string:\n");
scanf("%s",str1);
printf("String2 before memcopy: %s\n", str2);
memcpy(str2,str1,strlen(str1)+1);
printf("String2 after memcopy: %s\n", str2);;
}
