#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of 1st array");
    scanf("%d",&m);

    int a[m],b[m];
    int i,j;
    printf("Enter the elements of 1st array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of 2nd array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int temp=0;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
        }
    }
    int count=0;
    for(i=0;i<m;i++)
    {
      if(a[i]!=b[i])
            {
              count++;
            }


    }
    if(count==0)
    {
         printf("The array is equal\n");
    }

}
