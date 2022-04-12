#include<stdio.h>
void main()
{
	int f,i,n;
	printf("enter value of n");
	scanf("%d",&n);
	f=1;
	i=1;
	while(1<=n)
	{
		f=f*n;
		n--;
	}
	printf("factorial is %d",f);
}