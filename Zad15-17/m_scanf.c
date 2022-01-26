#include <stdio.h>
#include "matrix.h"

int m_scanf(MATRIX* m){
    int w;
    for(int x = 0; x<m->x; x++){
        for(int y=0; y<m->y; y++){
            scanf("%d", &w);
            m_put(m, x, y, w);
        }
    }
    return w;
}
