#include<stdio.h>

int main()
{
    int i;
    float S=0;

    for(i=1;i<=100;i++)
    {
        S=S+(1.0/i);
    }
    printf("%0.2f\n",S);
    return 0;
}

