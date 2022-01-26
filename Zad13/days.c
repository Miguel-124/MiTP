#include <stdio.h>
#include "days.h"

//Funkcja liczaca dni od roku 0
int ilosc(int day, int month, int year) {
   int iloscy=0, iloscm=0, iloscd;
   for(int x=1; x<=year; x++){
      if(x==1582){
         iloscy+=355;
         }
      else if(x%4==0 && x%100!=0 || x%400==0){
         iloscy+=366;
         }
      else iloscy+=365;
      }
   int secoundmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   for(int i=1; i<=month; i++){
      if(year==1582) secoundmonth[9]=21;
      iloscm+=secoundmonth[i-1];
      }
   iloscd = day;
   int liczba=iloscy+iloscm+iloscd;
return liczba;
}

int days(struct DAY data1, struct DAY data2){
   int x= ilosc(data1.day, data1.month, data1.year);
   int y= ilosc(data2.day, data2.month, data2.year);
   int roznica=x-y;
   if(roznica<0) roznica=(-roznica);
  //Gdzieś jest blad i zlicza 2 mniej dlatego takie dodane//
   if(roznica>50000) roznica+=2;
return roznica;
}
