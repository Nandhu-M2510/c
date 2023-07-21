#include<stdio.h>
int armstrong(int c)
{
    int r,sum=0,temp;
    temp=c;
    while(c>0)
    {
        r=c%10;
        sum+=(r*r*r);
        c=c/10;
    }
    if(temp==sum)
    {

        printf("Armstrong number");
    }
    else
    {
        printf("Not a armstrong number");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    armstrong(a);
    int k,temp=a,sum=0;
    while(a>0)
    {
       k=a%10;
       sum=(sum*10)+k;
       a/=10;
    }
    if(temp==sum)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot a palindrome");
    }
}
