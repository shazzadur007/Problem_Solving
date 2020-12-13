#include<stdio.h>

int main ()
{
    int m, n=5;
    int i;
    m=0;
    for(i=1; i<=10; i=i+1)
    {
        m=m+n;
        printf("%d * %d = %d\n",n,i,m);
    }


    return 0;
}
//program 4.9



//Program on for loop
//    int n=5;
//    int i;
//    for(i=1; i<=10; i++)
//    {
//        printf("%d * %d = %d\n",n,i,n*i);
//    }



// another program on while loop
//    while (n<=100)
//    {
//        printf("%d\n",n);
//        n++;
//        if (n>10){
//            break;
//        }
//    }


//another program on while loop

//    int n=0;
//    while (n<10)
//    {
//        n=n+1;
//        if (n%2==0)
//        {
//            continue;
//        }
//        printf("%d\n",n);
//    }


//another program on while loop
//    int n=5;
//    int i=1;
//
//    while (i<=10){
//        printf("%d * %d = %d\n",n,i,n*i);
//        i++;
//    }
