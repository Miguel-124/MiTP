#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

MATRIX m_create(int szerokosc, int wysokosc )
{
   MATRIX macierz;
   macierz.wsk = (int* )calloc(szerokosc * wysokosc, sizeof(int));
   if(macierz.wsk!=NULL)
   {
      macierz.x = szerokosc;
      macierz.y = wysokosc;
   }
   else
   {
      macierz.x = 0;
      macierz.y = 0;
   }

   return macierz;
}
