#include <stdio.h>
int main() {
   int a;
   printf("Podaj dlugosc boku kwadratu: ");
   scanf("%d", &a);
   printf("\n\t");
   for(int x=1; x<=a; x++) {
      printf("%%");
   }
   printf("\n\t");
   for(int k=2; k<a; k++) {
      for(int y=1; y<=a; y++){
         if (y==1) {
            printf("%%");
            continue;
         }
         else if (y==a) {
            printf("%%");
            continue;
         }
         else {
            printf(" ");
            continue;
         }
      }
   printf("\n\t");
   }
   for(int z=1; z<=a; z++) {
                printf("%%");
        }
   printf("\n\n");
return 0;
}
