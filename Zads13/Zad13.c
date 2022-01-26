#include <stdio.h>
#include "days.h"

int main() {
   struct DAY data1, data2;

   printf("\tProgram zlicza ilosc dni miedzy podanymi datami\n");
   printf("\tPodaj pierwsza date w formacie DD.MM.YEAR: ");
   scanf("%d.%d.%d", &data1.day, &data1.month, &data1.year);
   printf("\tPodaj druga date w formacie DD.MM.YEAR: ");
   scanf("%d.%d.%d", &data2.day, &data2.month, &data2.year);
   printf("\tIlosc dni miedzy tymi datami wynosi: %d\n", days( data1, data2));
return 0;
}
