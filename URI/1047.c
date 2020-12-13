#include <stdio.h>

int main()
{
    int sh,sm,eh,em,h,m;

    scanf("%d %d %d %d",&sh,&sm,&eh,&em);


    if(em<sm){
        em=em+60;
        eh=eh-1;
        m=em-sm;
        if(eh<sh){
            eh=eh+24;
            h=eh-sh;
        }
        else{
            h=eh-sh;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if(sh==eh&&sm==em){
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }
    else if(em>sm){
        m=em-sm;
        if(eh<sh){
            eh=eh+24;
            h=eh-sh;
        }
        else{
            h=eh-sh;

        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;

}
