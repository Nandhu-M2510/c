#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int count=0;
    for(i=0;i<n;i++)
    {

        if(a[i]==m)
        {
            count=1;
            break;
        }

    }
    if(count==1)
    {
        printf("Found");
    }

    else
    {
        printf("Not found");
    }

}


