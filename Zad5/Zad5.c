#include <stdio.h>
int main() {
   float a, b;

   printf("Program zlicza podstawowe dzialania na dwoch liczbach\n");
   printf("Podaj pierwsza dowolna liczba: \n");
   scanf("%f", &a);
   printf("Podaj druga dowolna liczbe: \n");
   scanf("%f", &b);
   printf("\n");

   float suma = (a + b);

   float odejmowanie = (a - b);

   float dzielenie = (a / b);

   float mnozenie = (a * b);

   printf("Wynik dodawania:\n");
   printf("%f\n", suma);
   printf("Wynik odejmowania: \n");
   printf("%f\n", odejmowanie);
   printf("Wynik dzielenia: \n");
   printf("%f\n", dzielenie);
   printf("Wynik mnozenia: \n");
   printf("%f\n", mnozenie);
   return 0;
}
