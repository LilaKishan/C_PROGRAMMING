#include<stdio.h>
void main()
{
	int i,n;
	float no,avg,sum=0;
	printf("enter value of n");
	scanf("%d",&n);
	i=1;
	printf("enter number");
	while(i<=n)
	{
		scanf("%d",&no);
		sum+=no;
		i++;
	}
	avg=sum/no;
	printf("average=%f",avg);
}
