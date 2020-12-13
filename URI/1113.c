#include<stdio.h>

int main()
{
    int a,b;
    do
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("Decrescente\n");
        }
        else if(a<b)
        {
            printf("Crescente\n");
        }
    }while(a!=b);
    return 0;
}
