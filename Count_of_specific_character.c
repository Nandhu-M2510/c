#include<string.h>
int main()
{
    char str[100],ch;
    scanf("%s %c",str,&ch);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("%d",count);
    return 0;
}
