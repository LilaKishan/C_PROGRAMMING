#include<stdio.h>
void main()
{
	int i,n,sum;
	printf("enter value:");
	scanf("%d",&n);
	sum=0;
	i=1;
	while(i<=n)
	{
		sum+=(i*i);
		i++;
	}
	printf("sum=%d",sum);
}