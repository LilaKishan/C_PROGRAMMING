#include<stdio.h>
void main()
{
	float i,n,sum;
	printf("enter value:");
	scanf("%f",&n);
	sum=0;
	i=1;
	while(i<=n)
	{
		sum+=1/i;
		i++;
	}
	printf("sum=%f",sum);
}