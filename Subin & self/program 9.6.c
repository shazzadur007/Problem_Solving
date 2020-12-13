
#include <stdio.h>
int string_length(char str[])
{
    int i, length=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}
 int main()
 {
     char ara[100];
     int length;
     while(NULL!= gets(ara)) {
        printf("%s\n", ara);
        length=string_length(ara);
        printf("length: %d\n",length);

     }
     return 0;
 }
