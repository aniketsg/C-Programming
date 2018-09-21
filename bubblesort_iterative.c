#include<stdio.h>
#define SIZE 5

void printarr(int arr[]);
void swap(int arr[], int, int);
void bubble(int arr[]);

void main()
{
int arr[SIZE]={2,7,9,1,6};
printarr(arr);
bubble(arr);
printarr(arr);
}

void printarr(int arr[])
{
	for(int i=0;i<SIZE;i++)
	{
		printf("%d\t",arr[i]);
	}
printf("\n");
}

void swap(int arr[], int i, int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void bubble(int arr[])
{
	int i,j;
	for(i=0;i<SIZE-1;i++)
		{
			for(j=0;j<SIZE;j++)
			{
				if(arr[j]>arr[j+1])
					{
					swap(arr, j, j+1);
					}
			}
		}	
}
