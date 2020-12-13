#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c",&s);
    printf("Hello, World!");
    printf("%s",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

//    char ch;
//    printf("Enter a letter: "); [^\n]%*
//    scanf("%c",&ch);
//    ch=getchar();
//    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//    {
//        printf("%c is vowel\n",ch);
//    }else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//    {
//        printf("%c is vowel\n",ch);
//    }
//    else{
//        printf("%c is consonant\n",ch);
//    }
