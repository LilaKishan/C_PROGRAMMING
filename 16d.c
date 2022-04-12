#include<stdio.h>
void main()
{
	int value[100],n,sum=0,count=0,max,min;
	float avg;
	printf("enter element\n");
	scanf("%d",&n);
	
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&value[i]);

	}
	max=value[0],min=value[0];	
	for (int i = 0; i < n; ++i)
	{
		sum+=value[i];
		avg=(float)sum/n;
		if (value[i]>max)
		{
			max=value[i];
		}
		if (value[i]<min)
		{
			min=value[i];
		}
	}
	printf("sum=%d\n",sum);
	printf("avrege=%f\n",avg);
	printf("max=%d\n",max);
	printf("min=%d\n",min);
}