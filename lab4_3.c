#include <stdio.h>
#include <string.h>
int main()
{
    char string[200],i;
    gets(string);
    for(i=0;i!=strlen(string);i++)
    {
        if(string[i]==string[i+1])
        {
            continue;
        }
        else
        {
            printf("%c",string[i]);
        }
    }
}
