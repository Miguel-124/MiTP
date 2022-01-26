#include <stdio.h>
#include "matrix.h"

int m_printf(MATRIX* macierz)
{
   if(macierz->x <= 0 || macierz->y <= 0 || macierz->wsk == NULL )
   {
      return 0;
   }
   for( int x = 0; x < macierz->x; x++)
   {
      for( int y = 0; y < macierz->y; y++)
      {
         printf("   %d", m_get(macierz, x, y));
      }
      printf("\n");
   }
   return 1;
}
