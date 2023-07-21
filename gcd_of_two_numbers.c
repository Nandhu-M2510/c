#include<stdio.h>
int main()
{
    int n,m,i,gcd;
    scanf("%d %d",&n,&m);
    if(m==0)
        gcd=n;
    if(n==0)
        gcd=m;
    for(i=1;i<=n && i<=m;i++)
    {
        if(n%i==0 && m%i==0)
          gcd=i;
    }
    printf("%d",gcd);
}
