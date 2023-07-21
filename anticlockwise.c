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
    for(i=x-1;i>=0;i--)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
