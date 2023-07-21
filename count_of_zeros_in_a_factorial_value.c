#include<string.h>
int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    int m=fact;
    int count=0;
    while(m>0)
    {
        int rem=m%10;
        if(rem==0)
        {
            count++;
        }
        m=m/10;
    }
    printf("%d",count);



}
