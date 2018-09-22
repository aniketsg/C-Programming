//Checking whether given matrix is a null matrix
#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,r,c;
printf("Enter number of rows:\n");
scanf("%d",&r);
printf("Enter number of columns:\n");
scanf("%d",&c);
int a[r][c];
printf("Enter array elements row-wise:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		if(a[i][j]!=0){						//Checking every element to be zero
			printf("Given matrix is not a null matrix\n");
			exit(1);
			}
		}
	}
printf("Given matrix is a null matrix\n");	
}

