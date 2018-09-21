//selection sort using iterative method
#include<stdio.h>
#define SIZE 5

void swap(int arr[], int i, int j);
void selection(int arr[]);
void printarr(int arr[]);
void main()
{
int arr[SIZE]={2,7,1,6,4};
printarr(arr);
selection(arr);
printarr(arr);
}

void printarr(int arr[])
{
int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t", arr[i]);
	}	
	printf("\n");
}

void min(int arr[], int k)
{
	int temp=0;
	int flag=0;
	int min=arr[k];
	for(int j=k+1;j<SIZE;j++)
	{
		if(min>arr[j])
			{
			flag=1;
			min=arr[j];
			temp=j;
			}
	}
	if(flag==1)
	{
	arr[temp]=arr[k];
	arr[k]=min;
	}
}

void selection(int arr[])
{
	int i,j;
	for(i=0;i<SIZE;i++)
		{
			min(arr, i);	
		}
}


