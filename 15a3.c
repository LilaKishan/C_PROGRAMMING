#include<stdio.h>
void main()
{
	int a,k=1;
	for (int i = 1; i <=4; i++)
	{
		for (int j = 1; j <=i; j++)
		{
		printf("%d",k);
		k++;
		}
		printf("\n");
	}
}
