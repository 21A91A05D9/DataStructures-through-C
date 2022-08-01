#include<stdio.h>
int fun(int *arr,int lb,int ub)
{
	int piv=arr[lb];
	int start=lb,end=ub,t;
	while(start<end)
	{
	while(arr[start]<=piv)
	start++;
	while(arr[end]>piv)
	end--;
   if(start<end)
   {
   	 t=arr[end];
   	 arr[end]=arr[start];
   	 arr[start]=t;
   }
}
   t=arr[lb];
   arr[lb]=arr[end];
   arr[end]=t;
   return end;
}
int main()
{
	int n,i,arr[100],lb=0,ub;
	scanf("%d",&n);
	ub=n-1;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	quicksort(arr,lb,ub);
	for(i=lb;i<=ub;i++)
	printf("%d ",arr[i]);
}
int quicksort(int *arr,int lb,int ub)
{  int loc,mid;
	if(lb<ub)
	{
		//mid=(lb+ub)/2;
	  loc=fun(arr,lb,ub);
	  quicksort(arr,lb,loc-1);
	  quicksort(arr,loc+1,ub);	
	}
}
