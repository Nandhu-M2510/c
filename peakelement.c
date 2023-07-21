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
printf("the elements are\n");
for(i=0;i<n;i++)
{
    if(a[i]>a[i+1]&&a[i]>a[i-1])
    {


       printf("%d\t",a[i]);
    }
}}

