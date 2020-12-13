#include<stdio.h>
int string_length(char str[])
{
    int i, length=0;
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
int string_compare(char a[],char b[])
{
    int i,j;
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]<b[i])
        {
            return -1;
        }
        if(a[i]>b[i])
        {
            return 1;
        }
    }
    if (string_length(a)==string_length(b))
    {
        return 0;
    }
    if(string_length(a)<string_length(b))
    {
        return -1;
    }
    if(string_length(a)>string_length(b)){
        return 1;
    }
}

int main()
{
    char ft[100],st[100];
    int compare;
    printf("Enter first string:\n");
    scanf("%s",ft);
    printf("Enter second String: \n");
    scanf("%s",st);
    compare=string_compare(ft,st);
    if(compare==0)
    {
        printf("\n Both the string are exactly same Bro!!\n");
    }
    else
    {
        printf("\n Both are not same bro!!\n");
    }

//     printf("\n\n\t\t\tCoding is Fun !\n\n\n");
      return 0;

}
