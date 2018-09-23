//Program to find whether the given character is vowel or not
#include<stdio.h>
void main(){
char ch;
printf("Enter the character: ");
scanf("%c",&ch);
if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 || ch==65 || ch==69 || ch==73 ||ch==79 ||ch==85)
printf("Given character is a vowel\n");
else
printf("Given character is not a vowel:\n");
}
