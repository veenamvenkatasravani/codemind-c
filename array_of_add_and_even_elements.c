#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        printf("%d ",arr[i]);
    }
}