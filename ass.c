#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[100];
        scanf("%s", a);
        int n=strlen(a);
        int b=0,s=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='(')
            {
                b++;
            }
            else if(a[i]=='*')
            {
                s++;
            }
            else
            {
                if(b>0)
                {
                    b--;
                }
                else if(s>0)
                {
                    s--;
                }
                else
                {
                    printf("No\n");
                    break;
                }
            }
        }
        if(b>s)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}

