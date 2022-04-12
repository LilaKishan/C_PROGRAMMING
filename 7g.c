#include<stdio.h>
void main()
{
    float a,b,c,d,t,p;
    printf("enter english marks out of 100:\n");
    scanf("%f",&a);
    printf("enter maths marks out of 100:\n");
    scanf("%f",&b);
    printf("enter science marks out of 100:\n");
    scanf("%f",&c);
    printf("enter computer marks out of 100:\n");
    scanf("%f",&d);
    t=a+b+c+d;
    printf("obtain marks out of 400 :%f\n",t);
    p=(100*t)/400;
    printf("percentage :%f\n",p);
    if(p>70)
    {
        printf("Distinction class");
    }
    else if(p<=70 && p>60)
    {
        printf("First class");
    }
    else if(p<=60 && p>45)
    {
        printf("Second class");
    }
    else if(p<=45 && p>35)
    {
        printf("Pass class");
    }
    else if(p<=35)
    {
        printf("Fail");
    }
}
