#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int m_remove(MATRIX* m){
    if(m->wsk == NULL){
        return 0;
    }
    else{
        free(m->wsk);
        m->x = 0;
        m->y = 0;
    }
    return 1;
}
