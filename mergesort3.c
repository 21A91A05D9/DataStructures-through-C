#include<stdio.h>
void merge(int *arr,int lb,int mid,int ub)
{
	int i=lb,j=mid+1,k=lb,brr[1000];
	while(i<=mid && j<=ub)
	{
		if(arr[i]<=arr[j])
		{
			brr[k]=arr[i];
			i++;
		}
		else
		{
			brr[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			brr[k]=arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			brr[k]=arr[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
	arr[k]=brr[k];
}
}

int main()
{
	int n,arr[100],i,lb=0,ub;
	scanf("%d",&n);
	ub=n-1;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	mergesort(arr,lb,ub);
	for(i=lb;i<=ub;i++)
	printf("%d ",arr[i]);
}
void mergesort(int *arr,int lb,int ub)
{   int mid;
	if(lb<ub)
	{
		mid=((lb+ub)/2);
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}
