#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int x=0,z;
for(i=n-1;i>=0;i--)
{
    x=x*10+a[i];
}
printf("\n%d",x);
scanf("%d",&z);
int y=x+z;
printf("%d",y);
}
