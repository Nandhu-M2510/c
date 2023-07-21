#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Row Size : ");

    scanf("%d",&x);

    printf("Enter Column Size : ");

    scanf("%d",&y);

    int a[x][y];
    int b[x];

    int i,j,count;

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<x; i++)
    {
        count=0;
        for(j=0; j<y; j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
            b[i]=count;
        }
    }
    int position=0;
    int max=b[0];
    for(i=0; i<y; i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            position=i;
        }
    }
    printf("%d ",position);

}
