#include <stdio.h>
int main()
{
   int x=0, y=1, f, z, w;
   printf("\nPodaj ktory wyraz ciagu Fibonacciego chcesz zobaczyc: ");
   scanf("%d", &f);
   switch (f) {
      case 0: printf("Podany wyraz ciagu wynosi: 0");goto koniec;
      case 1: printf("Podany wyraz ciagu wynosi: 1");goto koniec;
      case 2: printf("Podany wyraz ciagu wynosi: 1");goto koniec;
      default: break;
      }
   for(z=1; z<f; ++z){
      w=x+y;
      x=y;
      y=w;
      }
   printf("%d", w);
koniec:
printf("\n\n");
return 0;
}
