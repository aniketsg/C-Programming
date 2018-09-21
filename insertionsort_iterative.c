//insertion sort using iterative method
#include<stdio.h>
#define SIZE 5

void insertion(int arr[]);
void swap(int arr[],int ,int);
void printarr(int arr[]);

void main()
{
int arr[SIZE]={2,7,1,6,8};
printf("Array before sorting:\t");
printarr(arr);
insertion(arr);
printf("Array after sorting:\t");
printarr(arr);
}

void printarr(int arr[])
{

	int i;
	for(i=0;i<SIZE;i++)
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

void insertion(int arr[])
{
	int i,j;
	for(i=0;i<SIZE;i++)
	{
		j=i;
		while(j>0 && arr[j]<arr[j-1])
		{
			swap(arr, j, j-1);
			j--;
		}
	}	
}
