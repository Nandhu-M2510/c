#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,sum=0,sum_n=0,sub;
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=1;i<=n;i++)
    {
        sum_n=sum_n+i;
    }
    sub=sum_n-sum;
    printf("%d",sub);


}
