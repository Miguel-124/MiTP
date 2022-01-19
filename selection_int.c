#include"sortint.h"
void selection(int x[],int size){
    int swap, position;
    for (int i=0; i<size-1;i++){
        for(int j=i+1;j<size;j++){
            position=i;
            if(x[i]>x[j]){
                position=j;
            }
        }
        if(position!=i){
            swap=x[i];
            x[i]=x[position];
            x[position]=swap;
        }
    }
}
