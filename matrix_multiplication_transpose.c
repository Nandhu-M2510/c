#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Row Size : ");
    scanf("%d",&x);
    printf("Enter Column Size : ");
    scanf("%d",&y);
    int a[x][y];
    int i,j,count;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            b[j][i]=a[i][j];
        }

    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    int c[x][y];
    for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                for(int k=0; k<x; k++)
                {
                    sum=sum+a[i][k]*b[k][j];

                }
                c[i][j]=sum;
                sum=0;

            }
        }

        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }



}
