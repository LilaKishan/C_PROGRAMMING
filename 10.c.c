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
		if (i%2==0)
		{
			sum-=i;
		}
		else
		{
			sum+=i;
		}
		i++;
	}
	printf("sum=%d",sum);
}