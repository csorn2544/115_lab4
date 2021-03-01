#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,temp;
    char str[200];
    scanf("%s" ,str);
    temp=strlen(str);
    while(i<temp)
    {
        if(str[i]!=str[i+1])
        {
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
