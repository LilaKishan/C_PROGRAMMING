#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of side a :\n");
    scanf("%d",&a);
    printf("enter value of side b :\n");
    scanf("%d",&b);
    printf("enter value of side c :\n");
    scanf("%d",&c);
    if(a==b && c==b && a==c)
    {
        printf("given triangle is equilateral triangle.\n");
    }
    else if(a==b || b==c)
    {
        printf("given triangle is isosceles triangle.\n");
    }
    else if((a*a)==(b*b)+(c*c) || (c*c)==(b*b)+(a*a) || (b*b)==(a*a)+(c*c))
    {
        printf("given triangle is right angle triangle.\n");
    }
    else
    {
        printf("given triangle is scaler triangle.\n");
    }
}
