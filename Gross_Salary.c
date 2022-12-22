#include<stdio.h>
#include<math.h>
int main()
{
    //int s;
    float s,d,h,t;
    scanf("%f",&s);
    if(s<=10000)
    {
        d=0.8*s;
        h=0.2*s;
    }
    else if(s<=20000)
    {
        d=0.9*s;
        h=0.25*s;
    }
    else if(s>20000)
    {
        d=0.95*s;
        h=0.3*s;
    }
    t=s+h+d;
    printf("%.2f",t);
}