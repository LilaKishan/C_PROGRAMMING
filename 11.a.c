#include<stdio.h>
void main()
{
	int x,y,i,ans;
	printf("enter value of x and y :");
	scanf("%d %d",&x,&y);
	ans=1;i=1;
	while(i<=y)
	{
		ans*=x;
		i++;
	}
	printf("factorial is %d.\n",ans);
}