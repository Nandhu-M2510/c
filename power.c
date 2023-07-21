#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter num1:");
    scanf("%d",&m);
    printf("Enter num2:");
    scanf("%d",&n);
    int i,k=1;
    for(i=0;i<n;i++)
    {
        k=k*m;
    }
    printf("%d",k);
    int z;
    scanf("%d",&z);
    int a[z];
    for(int i=0;i<z;i++)
    {
       int temp=k%10;
        a[i]=temp;
        k=k/10;
    }
    int sum=0;
    for(i=z;i>=0;i--)
    {
        sum=sum*10+a[i];
    }
    printf("%d",sum);
}
