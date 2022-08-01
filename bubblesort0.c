#include<stdio.h>
void bubble_sort(int *arr,int n)  
{
   int i,j,temp;
   for(i=0;i<n-1;i++)
   {
   	for(j=0;j<n-1-i;j++)
   	{
   		if(arr[j]>arr[j+1])
   		{
   			temp=arr[j];
   			arr[j]=arr[j+1];
   			arr[j+1]=temp;
		   }
	   }
   }
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
