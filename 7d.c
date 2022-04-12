#include<stdio.h>
void main()
{
    int a,b,c,sum,sub,mul,div;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    printf("Here list of given operation :\n");
    printf("1.addition\n 2.substraction\n 3.multiplication\n 4.division\n");
    printf("choose one of the operation :");
    scanf("%d",&c);
    if(c>4 || c<1)
    {
        printf("invalid input...");
    }
    else if(c==1)
    {
        sum=a+b;
        printf("answer=%d",sum);
    }
    else if(c==2)
    {
        sub=a-b;
        printf("answer=%d",sub);
    }
    else if(c==3)
    {
        mul=(a*b);
        printf("answer=%d",mul);
    }
    else if(c==4)
    {
        div=a/b;
        printf("answer=%d",div);
    }
}
