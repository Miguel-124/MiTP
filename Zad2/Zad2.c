#include <stdio.h>
int main (){

   float a, b;
   printf("\n Program porównuje dwie dowolne liczby i wypisuje wieksza\n");
   printf("podaj 1 liczbe: \n");
   scanf("%f", &a);
   printf("podaj 2 liczbe: \n");
   scanf("%f", &b);

   if (a > b) printf("Liczba wieksza wynosi: %f\n", a);
   else if (a < b) printf("Liczba wieksza wynosi: %f\n", b);
   else printf("Obie liczby sa rowne\n");
   return 0;
   }
