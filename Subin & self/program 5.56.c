#include<stdio.h>

int main()
{
    int i, n, sum=0;
    scanf("%d",&n);

    for(i=1;i<n*2;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("Sum is: %d",sum);

    return 0;


}

/////////////////////////
//int i, n, oddcons, sum;
//scanf("%d", &n);
//for(i = 1, sum = 0; i <= 2 * n; i = i = i + 2) {
//sum = sum + i;
//}
//printf("Summation is %d\n", sum);
//return 0;

//    int i,n,sum=0;
//
//    scanf("%d",&n);
//
//    for(i=0; i<=n;i++)
//    {
//        sum=sum+i;
//    }
//    printf("Summation is %d\n",sum);

