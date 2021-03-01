#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,temp;
    char str[1000];
    scanf("%s" ,str);
    temp=strlen(str);
    while(i<temp)
    {
        if(i==0)
        {
            printf("%c",toupper(str[i]));
        }
        if(str[i]==' '&&str[i+1]!=' ')
        {
            printf("%c",toupper(str[i+1]));
        }
        i++;
    }
}

