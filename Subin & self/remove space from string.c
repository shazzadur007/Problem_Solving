#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,j, length;
    printf("\tEnter a string:\n");
    gets(s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        if(s[i]==' ')
        {
            for(j=i;j<length-1;j++)
            {
                s[j]=s[j+1];
            }
        }
        s[j]='\0';


    }
    printf("%s ",s);





}
