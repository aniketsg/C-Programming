//program to find grade based on marks
#include<stdio.h>
void main()
{
int total=0,mat,eng,sci,geo,his,mar;
float per;
char grade;
printf("Enter marks obtained in Maths:\n");
scanf("%d",&mat);
printf("Enter marks obtained in English\n");
scanf("%d",&eng);
printf("Enter marks obtained in Science\n");
scanf("%d",&sci);
printf("Enter marks obtained in Geography\n");
scanf("%d",&geo);
printf("Enter marks obtained in History\n");
scanf("%d",&his);
printf("Enter marks obtained in Marathi\n");
scanf("%d",&mar);
total=mat+eng+geo+sci+his+mar;
printf("Total marks: %d\n",total);
per=total / 6;
printf("Percentage: %f\n",per);
	if(per<60)
	{
	grade='F';
	}
	else if(per<70)
	{
	grade='D';
	}
	 else if(per<80)
	{
	grade='C';
	}
	else if(per<90)
	{
	grade='B';
	}
	else if(per<=100)
	{
	grade='A';
	}
printf("Grade: %c\n",grade);
}
