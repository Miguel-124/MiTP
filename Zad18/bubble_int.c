#include"sortint.h"
void bubble(int x[],int size){
    int temp;
    for (int i=0; i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(x[j]>x[j+1]){
                temp=x[j+1];
                x[j+1]=x[j];
              x[j]=temp;
            }
        }
    }
}
