#include <stdio.h>
int main()
{
int a, b, c, d;
printf("Podaj 4 dowolne liczby po spacji (Program zliczy ich sume): ");
scanf("%d %d %d %d", &a, &b, &c, &d);

printf("\t%5d\n", a);
printf("\t%5d\n", b);
printf("\t%5d\n", c);
printf("\t%5d\n", d);
printf("\t ----\n");

int e = (a+b+c+d);
printf("\t%5d\n", e);

return 0;
}
