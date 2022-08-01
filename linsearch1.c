#include<stdio.h>
int lin_search(int *a,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(a+i)==se) // if(a[i]==se)
		{
		return 1;
	    }
     }
	return -1;
}
void main()
{
	int n,i,a[100],se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	if(lin_search(a,n,se))// 1 or 0
	{
		printf("%d",lin_search(a,n,se));
	}
	else
	{
	printf("%d",lin_search(a,n,se));
   }
}
