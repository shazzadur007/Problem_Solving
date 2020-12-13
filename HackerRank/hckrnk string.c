#include<stdio.h>
int main()
{
    char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};
    int a, b;
    int i;
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++)
    {
        if (i<=9)
        {
            printf("%s\n",strings[i-1]);
        }
        else if (i>9)
        {
          if(i%2==0)
          {
              printf("even\n");
          }
          else
          {
              printf("odd\n");
          }

        }
    }
    return 0;
}
