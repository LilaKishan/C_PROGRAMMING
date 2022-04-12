#include<stdio.h>
void main()
{
    int a,b,c,l;
    printf("enter no. a :\n");
    scanf("%d",&a);
    printf("enter no. b :\n");
    scanf("%d",&b);
    printf("enter no. c :\n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d will be max",a);
        }
    }
    if(b>c)
    {
        if(b>a)
        {
            printf("%d will be max",b);
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            printf("%d will be max",c);
        }
    }
}
