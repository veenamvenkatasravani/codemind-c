#include<stdio.h>
int main()
{
    int n,twodigit;
    scanf("%d",&n);
    twodigit=n%100;
    printf("%0.2d",twodigit);
}