#include <stdio.h>

int main()
{
    char str1[]="bangla",str2[]="desh",str3[12];
    int i,j,length1=6,length2=4;
    for(i=0,j=0;i<length1; i++,j++)
    {
        str3[j]=str1[i];
    }
    for(i=0;i<length2;i++,j++)
    {
        str3[j]=str2[i];
    }
    str3[j]='\0';
    printf("%s\n",str3);
    return 0;
}

//int string_length(char str[])
//{
//    int i,length=0;
//    for(i=0;str[i]!='\0';i++)
//    {
//        length++;
//    }
//    return length;
//}
//int main()
//{
//    char country[100];
//    int length;
////    while(1==scanf("%s",country))
//    while(NULL !=gets(country))
//    {
//        length=string_length(country);
//        printf("length: %d\n",length);
//    }
//    return 0;
//}

//int main()
// {
//     char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h','\0'};
//     int i, length;
//     printf("%s\n",country);
////     length=10;
//     for(i=0;i<length;i++)
//     {
//         if(country[i]>=97&&country[i]<=122)
//         {
//             country[i]='A'+(country[i]-'a');
//         }
//     }
//     printf("%s\n",country);
//
//     for(i=0;i<length;i++)
//     {
//         if(country[i]>=65&&country[i]<=90)
//         {
//             country[i]='a'+(country[i]-'A');
//         }
//     }
//     printf("%s\n",country);
//     return 0;
// }













//#include <stdio.h>
//int main()
//{
//    double a,b,c=1,d=3,e,f;
//    int x;
//    for(a=0; a<=1.9; a=a+.2)
//    {
//        for(b=1.0; b<=3.0; b++)
//        {
//            e=b+a;
//            if(a==0.0||a==1.0){
//                printf("I=%.0lf J=%.0lf",a,e);
//            }
//
//            else if(e==3.0||e==4.0||e==5.0){
//                printf("I=%.0lf J=%.0lf",a,e);
//            }
//
//            else {
//                printf("I=%.1lf J=%.1lf",a,e);
//            }
//
//            printf("\n");
//        }
//    }
//    for(x=3; x<=5; x++)
//        printf("I=2 J=%d\n",x);
//    return 0;
//}
//










//#include <stdio.h>
//int str_length (char ch[]);
//int main (void)
//{
//  char ch[1000], word[500];
//  printf ("Enter your line: \n");
//  gets (ch);
//  int length = strlen(ch), i, j;
//  for (i = 0; i < length; i++)
//  {
//      printf("%c",ch[i]);
//      if(ch[i] == ' ')
//        printf("\n");
//  }
//  return 0;
//}

//int str_length (char ch[])
//{
//  int i;
//  for (i = 0; ch[i] != '\0';)
//    {
//      i++;
//    }
//  return i;
//}
