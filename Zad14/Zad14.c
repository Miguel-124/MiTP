#include <stdio.h>
#include "point.h"

int main()
{
    struct POINT a, b, c;

    printf("\tProgram zlicza pole i obwod trojkata\n");
    printf("\tPodaj pierwsza wspolrzedna w formacie X.Y: ");
    scanf("%d.%d", &a.x, &a.y);
    printf("\tPodaj druga wspolrzedna w formacie X.Y: ");
    scanf("%d.%d", &b.x, &b.y);
    printf("\tPodaj trzecia wspolrzedna w formacie X.Y: ");
    scanf("%d.%d", &c.x, &c.y);
    printf("\tPole tego trojkata wynosi: %f\n", area(a, b, c));
    printf("\tObwod tego trojkata wynosi: %f\n", perimeter(a, b, c));
    return 0;
}
