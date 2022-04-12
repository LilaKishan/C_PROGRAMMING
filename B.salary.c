#include<stdio.h>
void main()
{
    float s,hra,da,g;
    printf("enter your salary :");
    scanf("%f",&s);
    if(s>=10000)
    {
        if(s<20000)
        {
            da=0.8*s,hra=0.2*s;
            g=hra+da+s;
            printf("your gross salary is %f",g);
        }

    }
     if(s>=20000)
    {
        if(s<30000)
        {
            da=0.9*s,hra=0.25*s;
            g=hra+da+s;
            printf("your gross salary is %f",g);
        }

    }
     if(s>=30000)
    {
            da=0.95*s,hra=0.30*s;
            g=hra+da+s;
            printf("your gross salary is %f",g);
    }

}
