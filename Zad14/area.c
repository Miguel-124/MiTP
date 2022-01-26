#include <stdio.h>
#include "point.h"

float area(struct POINT a, struct POINT b, struct POINT c)
{
    float p = (b.x-a.x)*(c.y-a.y) - (c.x-a.x)*(b.y-a.y);
    float wp = p/2.0;
    if (wp < 0)
        wp = -wp;
    return wp;
}
