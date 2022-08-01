#include<stdio.h>
int bin_search(int *arr,int se,int n)
{
	int i=0,j=n-1;
	int m;
	while(i<=j)
	{
		m=(i+j)/2;
		if(se==arr[m])
		return 1;
		else if(se>arr[m])
		i=m+1;
		else
		j=m-1;
	}
	return 0;
}
int main()
{
	int n,i,j,arr[100],temp,se,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&se);
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
	c=bin_search(arr,se,n);
	if(c==1)
	printf("Found");
	else
	printf("Not found");
}
