#include<stdio.h>

int main()
{
    int W,X,Y,Z,start_date, start_hour,start_min,start_sec,end_day,end_hour,end_min,end_sec,day,sec,min,hour,st,st1,data;

    scanf("%*s %d %d %*s %d %*s %d",&start_date,&start_hour,&start_min,&start_sec);
    scanf("%*s %d %d %*s %d %*s %d",&end_day,&end_hour,&end_min,&end_sec);

    st=start_sec+ (start_min*60) + (start_hour*(60*60)) +(start_date*(24*60*60));
    st1=end_sec+ (end_min*60) +(end_hour*(60*60)) +(end_day*(24*60*60));

    data=st1-st;
    if(data>60){
        W=data/(24*60*60);
        X=(data-W*24*60*60)/(60*60);
        Y=(data-W*24*60*60- X*60*60)/60;
        Z=data-W*24*60*60- X*60*60-Y*60;
        printf("%d dia(s)\n",W);
        printf("%d hora(s)\n",X);
        printf("%d minuto(s)\n",Y);
        printf("%d segundo(s)\n",Z);
    }

    return 0;
}



//char dia[3],dia2[3],del[4];
//
//    scanf("%s %d %d %s %d %s %d",dia,&start_date,&start_hour,del,&start_min,del,&start_sec);
//    scanf("%s %d %d %s %d %s %d",dia2,&end_day,&end_hour,del,&end_min,del,&end_sec);



//day=end_day-start_date;
//    if(end_sec<start_sec)
//    {
//        end_sec=60+end_sec;
//        end_min=end_min-1;
//        sec=end_sec-start_sec;
//
//        if(end_min<start_min)
//        {
//            end_min=60+end_min;
//            end_hour=end_hour-1;
//            min=end_min-start_min;
//        }
//        else
//        {
//            min=end_min-start_min;
//        }
//        if(end_hour<start_hour)
//        {
//            end_hour=24+end_hour;
//            day=day-1;
//            hour=end_hour-start_hour;
//        }
//        else
//        {
//            hour=end_hour-start_hour;
//        }
//    }
//    else
//    {
//        sec=end_sec-start_sec;
//        if(end_min<start_min)
//        {
//            end_min=60+end_min;
//            end_hour=end_hour-1;
//            min=end_min-start_min;
//        }
//        else
//        {
//            min=end_min-start_min;
//        }
//        if(end_hour<start_hour)
//        {
//            end_hour=24+end_hour;
//            day=day-1;
//            hour=end_hour-start_hour;
//        }
//        else
//        {
//            hour=end_hour-start_hour;
//        }
//    }
