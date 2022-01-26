#include <stdio.h>
int main()
{
  float a;

  printf("Podaj dowolna liczbe: ");
  scanf("%f", &a);

  int b = (int) a;

  if(a == b)
  printf("Calkowita\n");
  else{
    printf("Liczba zmiennoprzecinkowa\n");
  }
  if(a == b){
    if(b % 2 == 0) printf("Parzysta\n");
    else printf("Nieparzysta\n");
  }

return 0;
}
