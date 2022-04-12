#include<stdio.h>
void main()
{
	int value[100],n;
	printf("enter element\n");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
	    printf("enter element :");
		scanf("%d",&value[i]);
	}
	for (int i=n-1; i>=0; i--)
	{
		printf("reverse= %d ",value[i]);
	}
}
