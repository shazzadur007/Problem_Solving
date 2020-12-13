#include <stdio.h>

int main()
{
    double a, b, sum;
    printf("Enter a value\n");
    scanf("%lf",&a);
    printf("Enter another value\n");
    scanf("%lf",&b);

    sum=a+b;
    printf("Sum is %lf\n",sum);
    printf("Sum is %0.3lf\n",sum);
    return 0;
}
