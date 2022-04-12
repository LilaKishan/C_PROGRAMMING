#include<stdio.h>
void main()
{
	int value[100],n,odd=0,even=0;
	printf("enter element\n");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
	    printf("enter element :\n");
	    scanf("%d",&value[i]);
		if (value[i]%2==0)
		{
			even+=1;
		}
		else
		{
			odd+=1;
		}
	}
	printf("even no. = %d\n",even);
	printf("odd no. = %d",odd);
}
