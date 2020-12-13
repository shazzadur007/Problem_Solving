#include<stdio.h>

int main()
{
    double celcius, farenheit;
    printf("Enter the temperature in Farenheit: ");
    scanf("%lf",&farenheit);
    celcius=(farenheit-32)/1.8;
    printf("Temperature in celcius is :%lf\n",celcius);
    return 0;



//    printf("Enter the temperature in celcius: ");
//    scanf("%lf",&celcius);
//    farenheit= (celcius*1.8)+32;
//    printf("Temperature in farenheit is :%lf\n",farenheit);

    return 0;

}
//    int i, n,sum=0;
//    printf("Input number of terms: ");
//    scanf("%d",&n);
//    printf("The odd numbers are: ");
//    for(i=1;i<=n;i++){
//        printf("%d ",2*i-1);
//        sum+=2*i-1;
//    }
//
//    printf("\nThe sum of odd Natural number upto %d terms: %d \n",n,sum);
//    return 0;

////////////////////////////////////
//    int ft_marks,st_marks,final_marks;
//    double total_marks;
//
//    ft_marks=80;
//    st_marks=74;
//    final_marks=97;
//
//    total_marks = ft_marks/4.0 + st_marks/4.0 + final_marks/2.0;
//
//    printf("%0.0lf\n",total_marks);
//
//    return 0;


//////////////
//    double x,y,x_plus_y,x_minus_y;
//    printf("Enter the value of x + y: ");
//    scanf("%lf",&x_plus_y);
//    printf("Enter the value of x - y: ");
//    scanf("%lf",&x_minus_y);
//    x=(x_plus_y +x_minus_y)/2;
//    y=(x_plus_y - x_minus_y)/2;
//    printf("x = %0.2lf, y = %0.2lf\n",x,y);
//    return 0;

////////////////////////////////////
//double a1,a2,b1,b2,c1,c2,d,x,y;
//
//    printf("a1= ");
//    scanf("%lf",&a1);
//    printf("a2= ");
//    scanf("%lf",&a2);
//    printf("b1= ");
//    scanf("%lf",&b1);
//    printf("b2= ");
//    scanf("%lf",&b2);
//    printf("c1= ");
//    scanf("%lf",&c1);
//    printf("c2= ");
//    scanf("%lf",&c2);
//    d=a1*b2-a2*b1;
//    if((int)d==0){
//        printf("Value of X and Y can not be determined.\n");
//    }else{
//        x=(b2*c1-b1*c2)/d;
//        y=(a1*c2-a2*c1)/d;
//        printf("x = %0.2lf , y = %0.2lf\n",x,y);
//    }
///////////////////////////////////////

//double loan_ammount,interest_rate,number_of_years, total_amount, monthly_amount;
//    printf("Enter the loan amount: ");
//    scanf("%lf",&loan_ammount);
//    printf("Enter the interest rate: ");
//    scanf("%lf",&interest_rate);
//    printf("Number of years: ");
//    scanf("%lf",&number_of_years);
//    total_amount=loan_ammount+loan_ammount*interest_rate*number_of_years/100.00;
//    monthly_amount=total_amount/(number_of_years*12);
//    printf("Total Amount= %0.2lf\n",total_amount);
//    printf("Monthly Amount= %0.2lf\n",monthly_amount);
//
//    return 0;

