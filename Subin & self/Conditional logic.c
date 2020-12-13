#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if((n/2)*2==n)
    {
        printf("\nThe number is even\n");

    }else
    {
        printf("\nThe number is ODD\n");
    }
    return 0;
}
