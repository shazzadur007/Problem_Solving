#include<stdio.h>

int main()
{
    int i,count,num=2;
    while(num<100)
    {
        count=0;
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d is prime\n",num);
        }
        else
        {
            printf("%d is not a prime\n",num);
        }
        num=num+1;
    }
    return 0;

}
//for (j=1,count=0;j<=20;j++)
//        {
//            if(j%i==0)
//            {
//                count++;
//
//            }
//            if(count==2)
//            {
//                printf("%d is prime",j);
//            }
//            else
//            {
//                printf("%d is not a prime\n",j);
//            }
//        }
