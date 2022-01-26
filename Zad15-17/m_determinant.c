#include <stdio.h>
#include <math.h>
#include "matrix.h"


int m_determinant(MATRIX* Macierz)
{
   int wyz = 0;
   int k, w; //aktualna kolumna, aktualny wiersz//
   MATRIX macierz;

   if(Macierz->x != Macierz->y)
   {
      printf(" Liczba rzedów jest różna od liczby kolumn, nie możliwe obliczznie wyznacznika\n");
      return 0;
   }
   else if(Macierz->x == 1)
   {
      return *(Macierz->wsk);
   }
   else if(Macierz->x == 2)
   {
      return ((*(Macierz->wsk)) * (*(Macierz->wsk + 3)) - (*(Macierz->wsk + 1)) * (*(Macierz->wsk + 2)));
   }
   else
   {
      macierz = m_create((Macierz->x-1), (Macierz->x-1));
      for(int roz = 0; roz < Macierz->x; roz++)
      {
         k = 0;
         for(int wiersz = 1; wiersz < Macierz->y; wiersz++)
         {
            k = 0;
            for(int kolumna = 0; kolumna < Macierz->x; kolumna++)
            {
               if(kolumna == roz)
               {
                  continue;
                  }
               m_put(&macierz, k, w, m_get(Macierz, wiersz, kolumna));
               w++;
            }
            k++;
         }
         wyz += (*(Macierz->wsk+roz)*pow(-1,roz)*m_determinant(&macierz));
      }
   }
   m_remove(&macierz);
   return wyz;
}
