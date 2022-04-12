#include<stdio.h>
void main()
{
    int l=1;
    char p='a';

    for(int i=1;i<=4;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            if(i%2==1)
            {
              printf("%d ",l);
              l++;
            }
            else
            {
                printf("%c ",p);
                p++;
            }
        }
        printf("\n");
    }
}
