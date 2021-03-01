#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i=0,j=0,k=0;
    char str[1000],s[11][4] = {"i","of","the","on","at","for","with","a","an","in","and"},*temp;
    gets(str);
    temp=strtok(str," ");
    while(temp!=NULL)
    {
        for(i=0;i<11;i++)
        if(strcmp(temp,s[i]))
            j++;
        if(j==11||k==0)
         printf("%c",toupper(temp[0]));
         temp=strtok(NULL," ");
         j=0;
         k++;
    }
}
