#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int cou=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^'||str[i]=='&'||str[i]=='*'||str[i]=='('||str[i]==')'||str[i]=='_'||str[i]=='-'||str[i]=='+'||str[i]=='=')
        {
            cou++;
        }
    }
    printf("%d",cou);
    return 0;
}
