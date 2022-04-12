#include<stdio.h>
void main()
{
	int a;
	printf("enter year :\n");
	scanf("%d",&a);
	if(a%400==0)
	{
	    printf("%d year is leap year..",a);
	}
	else if(a%100==0)
    {
	    printf("%d year is not leap year..",a);
	}
	else if(a%4==0)
    {
        printf("%d year is leapyear..",a);
    }
	else
    {
       printf("%d year is not leap year..",a);
    }
}
