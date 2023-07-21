#include<stdio.h>
int main()
{
    int x,y,m,n;
    printf("Enter the no.of rows for matrix1:");
    scanf("%d",&x);
    printf("Enter the no.of columns for matrix1:");
    scanf("%d",&y);
    printf("Enter the no.of rows for matrix2:");
    scanf("%d",&m);
    printf("Enter the no.of columns for matrix2:");
    scanf("%d",&n);
    if(x==m && y==n)
    {


    int a[x][y];

    int i,j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[x][y];
    printf("the addition is:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("cannot be performed");
    }
}
