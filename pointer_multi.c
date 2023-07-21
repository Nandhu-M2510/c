#include<stdio.h>
int fun(int *a,int *b)
{
    *a*=2;
    *b*=2;
    printf("%d %d\n",*a,*b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    printf("%d %d\n",a,b);
    fun(ptr1,ptr2);
    printf("%d %d",*ptr1,*ptr2);
}
