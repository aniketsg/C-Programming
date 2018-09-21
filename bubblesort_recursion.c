//bubble sort using recursion
#include<stdio.h>
#define SIZE 5

void bubble(int arr[], int);
void swap(int arr[], int, int);
void printarr(int arr[]);

void main()
{
int arr[SIZE]={2,1,7,4,8};
printarr(arr);
bubble(arr, SIZE);
printarr(arr);
}

void bubble(int arr[], int n)
{
int i;
		for(i=0;i<n-1;i++)
			{
			if(arr[i]>arr[i+1])
			swap(arr,i,i+1);
			}
		if(n-1>1)
			bubble(arr,n-1);	//recursive call


}

void swap(int arr[], int i, int j)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
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
