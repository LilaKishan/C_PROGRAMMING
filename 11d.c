#include<stdio.h>
void main()
{
	int no,last,sum;
	printf("enter number:");
	scanf("%d",&no);
	last=no%10;
	while(no>=10)
    {
        no/=10;
    }
    sum=last+no;
    printf("answer=%d",sum);
}
