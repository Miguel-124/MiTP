struct MATRIX_S
{
    int x;
    int y;
    int *wsk;
};

typedef struct MATRIX_S MATRIX;

MATRIX m_create(int, int);
int m_remove(MATRIX*);
int m_scanf(MATRIX*);
int m_scanf_(MATRIX*);
int m_printf(MATRIX*);
int m_get(MATRIX*, int, int);
int m_put(MATRIX*, int, int, int);
int m_determinant(MATRIX* );
MATRIX m_multiplication(MATRIX*, MATRIX*);
