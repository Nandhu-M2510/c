#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n],i;
    int count = 0, most_repeated;

    printf("Enter the Array elements :\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(count==0)
        {
            most_repeated = a[i];
            count = 1;
        }
        else if(a[i]==most_repeated)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    printf("Most repeated  Element : %d", most_repeated);
}
