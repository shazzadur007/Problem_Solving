#include <stdio.h>
#include <string.h>

int main()
{
    char x[15],y[15],z[15];
    char a[15]="vertebrado", b[15]="ave",c[15]="mamifero",d[15]="carnivoro",e[15]="onivoro",f[15]="onivoro",g[15]="herbivoro";
    char a2[15]="invertebrado",b2[15]="inseto",c2[15]="anelideo",d2[15]="hematofago",e2[15]="herbivoro",f2[15]="hematofago",g2[15]="onivoro";
    scanf("%s %s %s",x,y,z);


    if(strcmp(a,x)==0){
        if(strcmp(b,y)==0){
            if(strcmp(d,z)==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(strcmp(f,z)==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }

        }
    }
    else{
        if(strcmp(b2,y)==0){
            if(strcmp(d2,z)==0){
                    printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(strcmp(f2,z)==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }

    }
    return 0;


}
//    int i;
//    char word [3][30];
//    for(i=0;i<3;i++){
//       scanf("%s",word[i]);
//    }
//    for(i=0;i<=3;i++){
//       printf("%s ",word[i]);
//    }

