///�n�{�� float �B�I�� (floating point number)
///double �⭿���B�I��(double floating point number)
#include <stdio.h>
int main()
{///�g�o��h��,���G�bc�y��(cpu�B�@��)��,�u�ΤF�֤֪����
    float pi = 3.141592653589793238462643383279;
    double pi2 = 3.141592653589793238462643383279;
    printf("float %f\n",pi);
    printf("float %f\n",pi2);
    printf("float 10��: %10f\n",pi);
    printf("float 10��: %10f\n",pi2);
    printf("float 10��: %20.18f\n",pi);
    printf("float 10��: %20.18f\n",pi2);



}
///��J
///float 3.141593
///float 3.141593
///float 10��:   3.141593
///float 10��:   3.141593
///float 10��: 3.141592741012573200
///float 10��: 3.141592653589793100
