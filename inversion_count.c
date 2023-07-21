#include<stdio.h>
int main()
{
    printf("Enter the size of an array:");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                {
                    printf("(%d ,",a[i]);
                    printf("%d ),",a[j]);
                count++;
            }
        }
    }
    printf("\nNumber of inversion count in an array:%d",count);

}
