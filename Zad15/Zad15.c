#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main()
{

    int x, y;
    MATRIX m_a, m_b, m_ab;

    printf("\n\tProgram tworzy macierz o podanym rozmiarze i wartosciach\n");

    //Pierwsza macierz//
    printf("\n\tPodaj rozmiar pierwszej macierzy w formacie X.Y: ");
    scanf("%d.%d", &x, &y);
    m_a = m_create(x, y);
    if (m_printf(&m_a) == 1)
    {
        printf("\n\tUtworzono pierwsza macierz.\n\tPodaj jej elementy: ");
        m_scanf(&m_a);
    }
    else if (m_printf(&m_a) == 0)
    {
        printf("\n\tPodano nieprawidlowa liczbe kolumn\n");
        exit(1);
    }
    printf("\n\tUzupelniono pierwsza macierz. Wpisane wartosci to: \n");
    m_printf(&m_a);

    printf("\n Wyznacznikiem pierwszej macierzy jest liczba detA = %d\n",
    m_determinant(&m_a));

    //Druga macierz//
    printf("\n\tPodaj rozmiar drugiej macierzy w formacie X.Y: ");
    scanf("%d.%d", &x, &y);
    m_b = m_create(x, y);
    if (m_printf(&m_b) == 1)
    {
       printf("\n\tUtworzono druga macierz.\n\tPodaj jej elementy: ");
        m_scanf(&m_b);
    }
    else if (m_printf(&m_b) == 0)
    {
        printf("\n\tPodano nieprawidlowa liczbe kolumn\n");
        exit(1);
    }
    printf("\n\tUzupelniono druga macierz. Wpisane wartosci to: \n");
    m_printf(&m_b);

   printf("\n Wyznacznikiem drugiej macierzy jest liczba detB = %d\n",
    m_determinant(&m_b));

    //Iloczyn macierzy//
    printf("\nIloczynem wpisanych macierzy jest macierz: \n");
    m_ab = m_multiplication(&m_b, &m_a);

    m_printf(&m_ab);

    printf("\n Wyznacznik tej macierzy to detAB to : %d\n", m_determinant(&m_ab));

    //Koniec pracy programu//
    printf("\n\tKoniec pracy programu, zwalniam pamiec");
    if (m_remove(&m_a) == 1 || m_remove(&m_b) == 1)
    {
        printf("\n\tOperacja zakonczona pomyslnie\n");
    }
    else if (m_remove(&m_a) == 0 || m_remove(&m_b) == 0)
    {
        printf("\n\tBlad w zwalnianiu pamieci\n");
    }

    return 0;
}
