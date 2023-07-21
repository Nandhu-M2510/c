#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of 1st array");
    scanf("%d",&n);

    printf("Enter the size of 2nd array");
    scanf("%d",&m);

    int a[n],i,j;
    int b[m];
    int x=m+n, c[x];

    printf("Enter the no.of elements");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter the no.of elements");
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
        c[n+i]=b[i];
    }

    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
        {
            if(c[i]>c[j])
            {
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }

        }
    }
    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
        {
            if(c[i]==c[j])
            {
                c[j]=0;
            }
        }
    }
    for(i=0; i<x; i++)
    {
        if(c[i]!=0)
        {
            printf("%d ",c[i]);
        }
    }


}
