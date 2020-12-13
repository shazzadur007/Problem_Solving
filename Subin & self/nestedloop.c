#include<stdio.h>

int main()
{
    int i,n,m=0;
    for(n=1; n<=20; n++)
    {
        printf("\n");

        for(i=1;i<=10; i++)
        {
            m=m+n;
            printf("%d * %d = %d\n",n,i,m);
        }
    }

    return 0;
}


//nested loop for product

//    int i,n;
//    for(n=1;n<=20; n=n+1)
//    {
//        printf("\n");// space after one
//        for(i=1;i<=10;i=i+1)
//        {
//            printf("%d * %d = %d\n",n,i,n*i);
//
//        }
//    }
