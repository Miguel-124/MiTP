#include <stdio.h>

int main()
{
int a;

printf("\nPodaj temperature w stopniach Celsjusza: \n");
scanf("%d", &a);

float b = (a * 1.8 + 32);
printf("Podana temperatura w stopniach Fahrenheita wynosi: \n");
printf("%f\n\n", b);

return 0;

}
