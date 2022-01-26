#include <stdio.h>
int main () {
   int h;
   printf("Podaj wysokosc trojkata: ");
   scanf("%d", &h);
   printf("\n\t");
   for(int a=0; a<=h; a++) {
      for(int c=h; c>a; c--){
         printf(" ");
         }
      for(int b=0; b<a; b++){
         printf("%%");
         for(int d=b-1; d<b; d++){
            if(b==0) continue;
            printf("%%");
            }
         }
      printf("\n\t");
      }
   printf("\n");
return 0;
}
