#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		j=i-1;
		t=arr[i];
		while(j!=-1)
		{
		if(arr[j]>t)
		{
			arr[j+1]=arr[j];
			arr[j]=t;
		}
		j--;
    	}
	}
}
void main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
