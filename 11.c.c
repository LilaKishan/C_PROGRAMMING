#include<stdio.h>
void main()
{
	int factor,i,n;
	printf("enter value of n");
	scanf("%d",&n);
	factor=1;
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}