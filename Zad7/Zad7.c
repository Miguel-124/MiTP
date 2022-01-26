#include <stdio.h>
int main () {
   char znak;
   printf("Podaj znak jaki program ma przeliczyc na kod ASCII: ");
   scanf("%c", &znak);

   int ascii = znak;
   printf("Zapis w kodzie ASCII: %d\n", ascii);
   return 0;

}
