//Program to find trace of given matrix
#include<stdio.h>
void main()
{
int i,j,o,tr=0;
printf("Enter order of matrix: \n");
scanf("%d",&o);
int a[o][o];
printf("Enter the elements of matrix row-wise:\n");
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
		scanf("%d",&a[i][j]);		
		}
	}

	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
		if(i==j)		//adding diagonal elements only
		tr=tr+a[i][j];		
		}
	}
printf("Trace of the given matrix is: %d",tr);
}
