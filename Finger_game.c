#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem;
    rem=n%8;
    if(rem==1)
    {
        printf("Thumb");
    }
    if(rem==2)
    {
        printf("Index");
    }
    if(rem==3)
    {
        printf("Middle");
    }
    if(rem==4)
    {
        printf("Ring");
    }
    if(rem==5)
    {
        printf("Little");
    }
}
