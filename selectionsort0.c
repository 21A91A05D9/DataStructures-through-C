#include<stdio.h>
void selection_sort(int *arr,int n)
{
	int min,i,j,t;
    for(i=0;i<n-1;i++)
    {
      min=i;
	  for(j=i+1;j<n;j++)
	  {
	  	if(arr[j]<arr[min])
	  	{
	  		min=j;
		  }
	}
	if(min!=i)
	{
		t=arr[i];
		arr[i]=arr[min];
		arr[min]=t;
		}	
	}
}
int main()
{
	int n,arr[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
