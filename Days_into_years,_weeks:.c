#include<stdio.h>
int main()
{
    int n,years,weeks;
    scanf("%d",&n);
    years=n/365;
    weeks=(n%365)/7;
    printf("%d
%d",years,weeks);
    
}