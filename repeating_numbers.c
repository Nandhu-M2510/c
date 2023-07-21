#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 6, 3, 6, 1};

  for (int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])]>=0)
        {
            arr[abs(arr[i])]=-arr[abs(arr[i])];
        }
        else
        {
            printf("%d ",abs(arr[i]));
        }
    }
  return 0;
}
