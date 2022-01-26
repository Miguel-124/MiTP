#include <stdio.h>
#include "point.h"
#include "math.h"

float perimeter(struct POINT a, struct POINT b, struct POINT c)
{
    float ab = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    float bc = sqrt(pow((b.x - c.x), 2) + pow((b.y - c.y), 2));
    float ca = sqrt(pow((c.x - a.x), 2) + pow((c.y - a.y), 2));
    float ow = ab + bc + ca;
    return ow;
}
