#include <stdio.h>
int main() {
   int x, a, b, c;
   printf("\nProgram liczy ile potrzeba nominalow 100zl, 50zl, 20zl aby stworzyc pod$
   printf("Podaj kwote ktora chcesz sprawdzic: ");
   scanf("%1d%1d%1d", &a, &b, &c);
   x = 100*a+10*b+c;
   if (x==30 || x<20 || x&10!=0) {
      printf("\nBrak możlwosci stworzenia takiej kwoty z nominalow 100zl, 50z, 20zl$
      goto koniec;
      }
   else{
      for(int i20=0 ; i20<=(x/20) ; i20++){
         for (int i50=0 ; i50<=(x-i20*20)/50; i50++){
            int i100 = ((x-(i50*50) - (i20*20))/100);
            if((100*i100 + 50*i50 + 20*i20) == x){
             printf("\n\t%d PLN = %d*100PLN + %d*50PLN + %d*20PLN", x, i100, i50, i2$
            }
         }
      }
   }
   koniec:
   printf("\n\n");
return 0;
}
