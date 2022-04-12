#include<stdio.h>
void main()
{
	int i=1,j;
	for(i=1;i<=4;i++)
	{
	    if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
            if(j%2!=0)
            {
                printf("0");
            }
            else
                {
                    printf("1");
                }
            }
        }

        else
        {
        for(j=1;j<=i;j++)
        {
            if(j%2!=0)
            {
                printf("1");
            }
            else
                {
                    printf("0");
                }

        }
        }
    printf("\n");
	}
}

