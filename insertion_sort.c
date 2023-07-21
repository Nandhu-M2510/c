#include<stdio.h>

void insertion(int a[100],int n)
{
    int i,j,temp;

    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    return a;
}
int main()
{
    int n;
    printf("Enter ARRAY size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array Elements : \n");

    for(int i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    int temp,j;

    insertion(a,n);

    for(int i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
}
