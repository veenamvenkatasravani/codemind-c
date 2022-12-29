#include<stdio.h>
int main()
{
    int a,m,p,c,b,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    a=(p+c+b+m+cs)*0.2;
    if(a>=90)
    printf("Grade A");
    else if(a>=80)
    printf("Grade B");
    else if(a>=70)
    printf("Grade C");
    else if(a>=60)
    printf("Grade D");
    else if(a>=40)
    printf("Grade E");
    else
    printf("Grade F");
}