#include<stdio.h>
void main()
{
    int a,n;
    printf("enter number :");
    scanf("%d",&a);
    n=a%10;
    if(n%2!=0)
    {
        printf("%d is odd",n);
    }
    else
    {
        printf("%d is even",n);
    }
}
