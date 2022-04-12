#include<stdio.h>
void main()
{
    float a,b,c,d,x,y;
    printf("TO FIND ROOTS OF EQUATION AX^2+BX+C \n");
    printf("enter value of a,b,c :");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*2)-4*a*c;
    if(d>0)
    {
        x=(-b+sqrt(d))/2*a;
        y=(-b-sqrt(d))/2*a;
    }
    else if(d==0)
    {
        x=-b/(2*a);
        y=-b/(2*a);
    }
    else
    {
        printf("roots are imaginary...");
    }
    printf("roots are %f and %f.",x,y);
}
