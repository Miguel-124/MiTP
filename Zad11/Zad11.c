#include <stdio.h>
void funkcja() {
   static int n=1;
   printf("\n %d wywolanie", n++);
}

int main() {
   int b;
   printf("\nPodaj ile razy funkcja ma byc wywolana: ");
   scanf("%d", &b);
   for(int c=1; c<=b; c++){
      funkcja();
      }
   printf("\n\n");
return 0;
}
