#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("enter n1,n2,n3 numbers :");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("%d is largest",n1);
        }
    }
    else if(n2>n3)
    {
        printf("%d is largest",n2);
    }
    else
    {
        printf("%d is largest",n3);
    }
}
