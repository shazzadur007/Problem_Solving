
#include<stdio.h>

int main()
{
   int a,i,to_pos=0,to_neg=0,to_eve=0,to_odd=0;

   for(i=1;i<=5;i++){
        scanf("%d",&a);
        if(a%2==0){
            to_eve++;
        }
        if(a%2!=0){
            to_odd++;
        }
        if(a>0){
            to_pos++;
        }
        if(a<0){
            to_neg++;
    }

   }

    printf("%d valor(es) par(es)\n",to_eve);
    printf("%d valor(es) impar(es)\n",to_odd);
    printf("%d valor(es) positivo(s)\n",to_pos);
    printf("%d valor(es) negativo(s)\n",to_neg);

   return 0;

}

