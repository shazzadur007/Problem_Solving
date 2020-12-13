#include<stdio.h>
#include<math.h>
//#define pi 3.14159


int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=b-a;
    if(c<0){
        c=24+(b-a);
    }
    if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S)\n",c);

    }
    return 0;
}
//    double a,b,c,tmp;
//    scanf("%lf %lf %lf",&a,&b,&c);
//
//        if(a<b){
//           tmp=b;
//           b=a;
//           a=tmp;
//        }
//        if(b<c){
//            tmp=c;
//            c=b;
//            b=tmp;
//        }
//        if(a<b){
//            tmp=b;
//            b=a;
//            a=tmp;
//        }
//
//
//        if(a>=b+c){
//            printf("NAO FORMA TRIANGULO\n");
//        }
//        else if(a*a == b*b+c*c){
//            printf("TRIANGULO RETANGULO\n");
//        }
//        else if(a*a > b*b+c*c){
//            printf("TRIANGULO OBTUSANGULO\n");
//        }
//        else if(a*a<b*b+c*c){
//            printf("TRIANGULO ACUTANGULO\n");
//        }
//        if(a==b&&b==c){
//            printf("TRIANGULO EQUILATERO\n");
//        }
//        else if(a==b||b==c){
//            printf("TRIANGULO ISOSCELES\n");
//        }

////////////////////////
//    int i,N;
//    scanf("%d",&N);
//    for(i=1;i<=N; i++){
//        if(N%i==0){
//            printf("%d\n",i);
//        }
//    }
//

////////////////////////
//   int a,b,c,d,e,count=0;
//   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//   if(a%2==0){
//    count++;
//   }
//   if(b%2==0){
//    count++;
//   }
//   if(c%2==0){
//    count++;
//   }
//   if(d%2==0){
//    count++;
//   }
//   if(e%2==0){
//    count++;
//   }
//   printf("%d valores pares\n",count);

//////////////////////////
//#include <stdio.h>
//int main()
//{
//    int I,J,a=7,b;
//    for(I=1;I<=9;I=I+2)
//    {
//        for(b=1,J=a;b<=3;J--,b++)
//            printf("I=%d J=%d\n", I, J);
//        a=a+2;
//    }
//    return 0;
//}

//    int a,b;
//    scanf("%d %d",&a,&b);
//
//    if(b%a==0||a%b==0){
//        printf("Sao Multiplos\n");
//    }
//    else{
//        printf("Nao sao Multiplos\n");
//    }

//////////////////////////
//    double a,b,c,x,y;
//    scanf("%lf %lf %lf",&a,&b,&c);
//    if(a+b>c&&a+c>b&&b+c>a){
//        x=a+b+c;
//        printf("Perimetro = %0.1lf\n",x);
//    }
//    else{
//        y=((a+b)*c)/2;
//        printf("Area = %0.1lf\n",y);
//
//    }
//

////////////////////////////
//    int a,b,c,p,q,r,tmp;
//    scanf("%d %d %d",&a,&b,&c);
//    p=a;
//    q=b;
//    r=c;
//
//    if(p>q){
//       tmp=p;
//       p=q;
//       q=tmp;
//    }
//    if(q>r)
//    {
//        tmp=q;
//        q=r;
//        r=tmp;
//    }
//    if(p>q){
//       tmp=p;
//       p=q;
//       q=tmp;
//    }
//    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",p,q,r,a,b,c);

/////////////////////
//    int i,j,tmp,n=3;
//    int x[10];
//
//    for(i=0;i<n;i++){
//        scanf("%d",&x[i]);
//    }
//    for(i=0;i<n;i++){
//        for(j=i+1;j<n;j++){
//            if(x[j]<x[i]){
//               tmp=x[i];
//               x[i]=x[j];
//               x[j]=tmp;
//            }
//
//        }
//        printf("%d\n",x[i]);
//    }
//    printf("\n");
//    for(i=0;i<n;)


//    int i,n=97;
//    char c;
//    while(i<25){
//        for(c='a';c<='z';c++){
//
//           printf("%d e %c\n",n,c);
//           n+=1;
//           i++;
//        }
//
//    }

/////////////////////////
//    int i,c;
//    char str[100];
//    scanf("%d",&c);
//    for(i=0;i<c;i++){
//        scanf("%s",str);
//    }
//    for(i=0;i<c;i++){
//       printf("gzuz\n");
//    }

////////////////////////////////
//    float i,j;
//    scanf("%f %f",&i,&j);
//    if(i==0.0&&j==0.0){
//        printf("Origem\n");
//    }
//    else if(j==0.0)
//      {
//        printf("Exio X\n");
//
//      }
//    else if(i==0.0){
//        printf("Exio Y\n");
//    }
//    else if(i>0.0)
//    {
//        if(j>0.0){
//           printf("Q1\n");
//        }else{
//           printf("Q4\n");
//        }
//    }
//    else if(i<0.0 &&j>0.0){
//        printf("Q2\n");
//    }
//    else{
//        printf("Q3\n");
//    }

////////////////////////////////////
//  double a, b, c, d, e, m;
//    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
//    m = (a * 2 + b * 3 + c * 4 + d) / 10;
//    printf("Media: %.1f\n", m);
//    if (m >= 7.0)
//    {
//        printf("Aluno aprovado.\n");
//    }
//    else if (m >= 5.0)
//    {
//        printf("Aluno em exame.\n");
//        scanf("%lf", &e);
//        printf("Nota do exame: %.1f\n", e);
//        if (e + m / 2.0 > 5.0)
//        {
//            printf("Aluno aprovado.\n");
//        }
//        else
//        {
//            printf("Aluno reprovado.\n");
//        }
//        printf("Media final: %.1f\n", (e + m) / 2.0);
//    }
//    else
//    {
//        printf("Aluno reprovado.\n");
//    }

//////////////////////////////////////////////////

//    int x,y;
//    float p;
//    scanf("%d %d",&x,&y);
//
//
//    if(x==1)
//    {
//        p=4.00*y;
//
//    }
//    else if(x==2){
//
//        p=4.50*y;
//
//    }
//    else if(x==3){
//
//        p=5.00*y;
//
//    }
//    else if(x==4){
//
//        p=2.00*y;
//
//    }
//    else if(x==5){
//
//        p=1.50*y;
//
//    }
//     printf("Total: R$ %0.2lf\n",p);

//////////////////////////////
//    float a;
//    scanf("%f",&a);
//    if(0>a||a>100)
//    {
//       printf("Fora de intervalo\n");
//    }
//    else{
//        if(a>=0&&a<=25){
//            printf("Intervalo [0,25]\n");
//        }
//        else if(a>25&&a<=50){
//            printf("Intervalo (25,50]\n");
//        }
//        else if(a>50&&a<=75){
//            printf("Intervalo (50,75]\n");
//        }
//        else{
//            printf("Intervalo (75,100]\n");
//        }
//    }
////////////////////////////////

//    double a,b,c,r1,r2,m;
//    scanf("%lf %lf %lf",&a,&b,&c);
//    m=(b*b)-(4*a*c);
//    if(a==0||m<0){
//        printf("Impossivel calcular\n");
//    }else{
//        r1=(-b+sqrt(m))/(2*a);
//        r2=(-b-sqrt(m))/(2*a);
//        printf("R1 = %0.5lf\n",r1);
//        printf("R2 = %0.5lf\n",r2);
//
//    }

//////////////////
//    int a,b,c,d,sum_ab,sum_cd;
//    scanf("%d %d %d %d",&a,&b,&c,&d);
//    sum_ab=a+b;
//    sum_cd=c+d;
//    if(b>c&&d>a&&sum_cd>sum_ab&&c>0&&d>0&&a%2==0)
//    {
//      printf("Valores aceitos\n");
//    }else{
//        printf("Valores nao aceitos\n");
//
//    }

//////////////////////////
//    int x,i;
//    scanf("%d",&x);
//
//    if(x%2!=0)
//        {
//            printf("%d\n",x);
//            for(i=0;i<=4;i++){
//                    x+=2;
//            printf("%d\n",x);
//
//            }
//
//        }else{
//            printf("%d\n",x=x+1);
//            for(i=0;i<=4;i++){
//                    x+=2;
//            printf("%d\n",x);
//
//            }
//
//
//        }


/////////////

//    double x;
//    int n;
//    scanf("%lf",&x);
//    n=x*100;
//    printf("NOTAS:\n");
//    printf("%d nota(s) de R$ 100.00\n",n/10000);
//    n= n%10000;
//    printf("%d nota(s) de R$ 50.00\n",n/5000);
//    n=n%5000;
//    printf("%d nota(s) de R$ 20.00\n",n/2000);
//    n=n%2000;
//    printf("%d nota(s) de R$ 10.00\n",n/1000);
//    n=n%1000;
//    printf("%d nota(s) de R$ 5.00\n",n/500);
//    n=n%500;
//    printf("%d nota(s) de R$ 2.00\n",n/200);
//
//    printf("MOEDAS:\n");
//    n=n%200;
//    printf("%d moeda(s) de R$ 1.00\n",n/100);
//    n=n%100;
//    printf("%d moeda(s) de R$ 0.50\n",n/50);
//    n=n%50;
//    printf("%d moeda(s) de R$ 0.25\n",n/25);
//    n=n%25;
//    printf("%d moeda(s) de R$ 0.10\n",n/10);
//    n=n%10;
//    printf("%d moeda(s) de R$ 0.05\n",n/5);
//    n=n%5;
//    printf("%d moeda(s) de R$ 0.01\n",n);

////////////////

//    int x,yr,mo,day,tmp;
//    scanf("%d",&x);
//    yr=x/365;
//    tmp=(x%365);
//    mo=tmp/30;
//    day=tmp%30;
//
//
//    printf("%d ano(s)\n",yr);
//    printf("%d mes(es)\n",mo);
//    printf("%d dia(s)\n",day);
//    return 0;

///////////////////
//    int x,y;
//    scanf("%d",&x); :%d:%d
//
//    printf("%d\n",x);
//
//    printf("%d nota(s) de R$ 100,00\n",x/100);
//    y=x%100;
//    printf("%d nota(s) de R$ 50,00\n",y/50);
//    y=y%50;
//    printf("%d nota(s) de R$ 20,00\n",y/20);
//    y=y%20;
//    printf("%d nota(s) de R$ 10,00\n",y/10);
//    y=y%10;
//    printf("%d nota(s) de R$ 5,00\n",y/5);
//    y=y%5;
//    printf("%d nota(s) de R$ 2,00\n",y/2);
//    y=y%2;
//    printf("%d nota(s) de R$ 1,00\n",y/1);


///////////////////
//    int x,y;
//    double z;
//    scanf("%d %d",&x,&y);
//    z=(x*y)/12.0;
//    printf("%0.3lf\n",z);
//    return 0;
/////////////////////////////

//    int x;
//    scanf("%d",&x);
//    printf("%d minutos\n",x*2);


////////
//    double x1,y1,x2,y2,z;
//    scanf("%lf %lf",&x1,&y1);
//    scanf("%lf %lf",&x2,&y2);
//    z = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
//    printf("%0.4lf\n",z);

/////////

//    int x;
//    double y;
//
//    scanf("%d %lf",&x,&y);
//    printf("%0.3lf km/l\n",x/y);

///////////////////////////////
//    int a,b,c,temp;
//
//    scanf("%d %d %d",&a,&b,&c);
//    temp=a;
//    if(a<b||a<c){
//        if(b<c){
//            temp=c;
//        }
//        else
//        {
//            temp=b;
//        }
//    }
//
//    printf("%d eh o maior\n",temp);


/////////////////////////////////////////////
//   double a,b,c;
//   scanf("%lf %lf %lf",&a,&b,&c);
//
//   printf("TRIANGULO: %0.3lf\n",.5*a*c);
//   printf("CIRCULO: %0.3lf\n",pi*pow(c,2));
//   printf("TRAPEZIO: %0.3lf\n",.5*(a+b)*c);
//   printf("QUADRADO: %0.3lf\n",pow(b,2));
//   printf("RETANGULO: %0.3lf\n",a*b);
//    return 0;
//////////////////////
//    double a,b;
//    scanf("%lf",&a);
//    b=((4.0/3.0)*pi*pow(a,3));
//    printf("VOLUME = %0.3lf\n",b);
//////////////////////////
//    int a,b,c,d;
//    double e,f,g;
//    scanf("%d %d %lf",&a,&b,&e);
//    scanf("%d %d %lf",&c,&d,&f);
//
//    g=((b*e)+(d*f));
//
//    printf("VALOR A PAGAR: R$ %0.2lf\n",g);

//////////////////////////

//    char t[100];
//    double a,b,c,total;
//    scanf("%s",&t);
//
//    scanf("%lf %lf",&a,&b);
//
//    c=(15*b)/100;
//
//    total=a+c;
//
//    printf("TOTAL = R$ %0.2lf\n",total);



//////////////////////
//    float a,b,c,MEDIA;
//    scanf("%f %f %f" ,&a,&b,&c);
//    MEDIA=((a*2)+(b*3)+(c*5))/(2+3+5);
//    printf("MEDIA = %.1f\n",MEDIA);
//    int a,b,c,d,DIF;
//    scanf("%d %d %d %d",&a,&b,&c,&d);
//    DIF=((a*b)-(c*d));
//    printf("DIFERENCA = %d",DIF);
//    return 0;

//////////////////////////////////////////////////////////
//    int a,b;
//    float c;
//    scanf(" %d %d %f",&a,&b,&c);
//
//
//    printf("NUMBER = %d\n", a);
//    printf("SALARY = U$ %0.2f\n",b*c);

