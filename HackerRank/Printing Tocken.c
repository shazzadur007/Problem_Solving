#include <stdio.h>
#include <string.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    for (int i = 0; i< len; i++)
    {
    	if (s[i]!=' ')
    	{
    		printf("%c", s[i]);
    	}
    	else{
    		printf("\n");
    	}
    }
    return 0;
}











//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//    int i,totalWord=0,wordindex=0;
//    char string1[1000];
//    char word[100][100];
////    string1=(char*)malloc(1024 * sizeof(char));
//    fgets(string1,sizeof string1,stdin);
////    scanf("%[^\n]", string1);
////    string1 = realloc(string1, strlen(string1) + 1);
//
//    for(i=0;i<=strlen(string1);i++)
//    {
//        if(string1[i]==' '||string1[i]=='\0'){
//            word[totalWord][wordindex]='\0';
//            totalWord++;
//            wordindex=0;
//        }
//        else{
//            word[totalWord][wordindex]=string1[i];
//            wordindex++;
//        }
//
//    }
//    for(i=0;i<=totalWord;i++)
//    {
//        printf("%s\n",word[i]);
//    }
//
//}
