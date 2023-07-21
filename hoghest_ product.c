#include <stdio.h>
#include <limits.h>

int main()
{
  int arr1[] = {1, 4, 3, 6, 7, 0};
  int arr2[] = {-1, -3, -4, 2, 0, -5};

  int max1 = INT_MIN;
  int max2 = INT_MIN;
  int min1 = INT_MAX;
  int min2 = INT_MAX;

  int i,n;

  for (i=0;i<6;i++)
    {
    n = arr1[i];
        if (n > max1)
        {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2)
        {
            max2 = n;
        }

        if (n < min1)
        {
            min2 = min1;
            min1 = n;
        }
        else if (n < min2)
        {
            min2 = n;
        }
    }

  if (max1 * max2 > min1 * min2)
    {
        printf("The highest product pair in arr1 is {%d, %d}\n", max1, max2);
    }
  else
    {
        printf("The highest product pair in arr1 is {%d, %d}\n", min1, min2);
    }

  max1 = INT_MIN;
  max2 = INT_MIN;
  min1 = INT_MAX;
  min2 = INT_MAX;

  for (i = 0; i < 6; i++)
    {
        n = arr2[i];
        if (n > max1)
        {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2)
        {
            max2 = n;
        }

        if (n < min1)
        {
            min2 = min1;
            min1 = n;
        }
        else if (n < min2)
        {
            min2 = n;
        }
    }

  if (max1 * max2 > min1 * min2)
    {
        printf("The highest product pair in arr2 is {%d, %d}\n", max1, max2);
    }
  else
    {
        printf("The highest product pair in arr2 is {%d, %d}\n", min1, min2);
    }

  return 0;
}
