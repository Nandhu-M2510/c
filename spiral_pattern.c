#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rowmin=1;
    int rowmax=n;
    int colmin=1;
    int colmax=n;
    int a[n][n];
    int count=1;
    while(rowmin<=rowmax)
    {
        for(int i=colmin;i<=colmax;i++)
        {
            a[rowmin][i]=count++;
        }
        for(int i=rowmin+1;i<=rowmax;i++)
        {
            a[i][colmax]=count++;
        }
        for(int i=colmax-1;i>=colmin;i--)
        {
            a[rowmax][i]=count++;
        }
        for(int i=rowmax-1;i>rowmin;i--)
        {
            a[i][colmin]=count++;
        }
        rowmin++;
        colmin++;
        rowmax--;
        colmax--;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

}
