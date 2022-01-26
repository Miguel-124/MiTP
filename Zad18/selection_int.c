#include"sortint.h"
void swap(int *xp, int *yp){
   int hold = *xp;
   *xp = *yp;
   *yp = hold;
}
void selection(int x[],int size){
    int position, j, i;
    for (i=0; i<size-1;i++){
         position=i;
        for(j=i+1;j<size;j++){
            if (x[j] < x[position])
               position=j;
         swap(&x[position], &x[i]);
        }
    }
}
