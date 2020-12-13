#include<stdio.h>

int main()
{
   int i,total=0;
   float sum,avg,a;
   for(i=1;i<=6;i++){
    scanf("%f",&a);
    if(a>0){
        total++;
        sum+=a;
    }

   }
   avg=sum/total;
   printf("%d valores positivos\n",total);
   printf("%0.1f\n",avg);

   return 0;

}
