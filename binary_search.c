#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=0;
    int high=n-1;
    int mid=low+high/2;
    int m;
    scanf("%d",&m);

    int i;
    while(low<=high)
    {


    if(m==a[mid])
    {
        printf("Element found");
    }



    else if(m<a[mid])
    {
        low=0;
        high=mid;


    }
    else
    {
        low=mid+1;
        high=n-1;
        break;
    }
    }

}
