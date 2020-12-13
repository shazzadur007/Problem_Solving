 #include <stdio.h>
 int string_length(char str[])
 {
     int i, length=0;
     for(i=0;str[i]!='\0';i++)
     {
         length++;
     }
     return length;
 }
// int main()
// {
//     char country[100];
//     int length;
//     while(1)
//     {
//         scanf("%s",country);
//         length=string_length(country);
//         printf("length: %d\n",length);
//     }
//     return 0;
//
// }

int main(){

      char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h','\0'};
     printf("%s\n", country);
     int length = sizeof(country)/sizeof(country[0]);
     for(int i = 0; i < length; i++) {
         if(country[i] >= 97 && country[i] <= 122) {
             country[i] = 'A' + country[i] - 'a';
         }
     }
     printf("%s\n", country);
     for(int i=0; i<length;i++)
     {
         if(country[i]>=65 && country[i]<=90)
         {
             country[i] = 'a' + (country[i] - 'A');
         }
     }
     printf("%s\n", country);
     return 0;
}
