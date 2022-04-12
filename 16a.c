#include<stdio.h>
void main()
{
	int value[100],n,neg=0,pos=0;
	printf("enter element\n");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
	    printf("enter element :");
	    scanf("%d",&value[i]);
		if (value[i]>0)
		{
			pos=pos+1;
		}
		else
		{
			neg+=1;
		}
	}
	printf("positive no. are %d\n",pos);
	printf("negative no. are %d",neg);
}
