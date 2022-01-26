#include <stdio.h>
#include "matrix.h"

MATRIX m_multiplication(MATRIX* m_a, MATRIX* m_b)
{
   MATRIX m_ab;

   if ( m_a->x =! m_b->y)
   {
      printf(" Nie możliwe jest wykonanie iloczynu\n");
   }
   else if( m_a->x = m_b->y)
   {
      m_ab = m_create(m_a->x, m_b->y );
      for(int w_a = 0; w_a < m_a->y; w_a++)   /* Wybieramy wiersz
macierzy A, któr mnozymy przez kolejne elementy macierzy B */
      {
         for(int k_b = 0; k_b < m_b->x; k_b++)
         {
            int wxk = 0;
            for (int element = 0; element < m_a->x; element++)
            {
               wxk += m_get( m_a, element, w_a) * m_get( m_b, k_b, element);
            }
            m_put(&m_ab, k_b, w_a, wxk);
         }
      }
   }
   return m_ab;
}
