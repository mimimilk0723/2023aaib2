#include <stdio.h>
int main()
{
    int a,b;
    printf("�п�J��Ӿ��:"); ///���L����,���ܧA��J
    scanf("%d %d",&a,&b); ///scanf() �n�[&�Ÿ�
    printf("�A��J�F2�ӼƦr,�����[�k:\n");
    printf("%5d\n",a); ///�L�X��,5����,�᭱\n����
    printf("%5d\n",b); ///�L�X��,5����,�᭱\n����
    printf("--------\n"); ///�L�X�@��,�᭱\n����
    printf("%5d",a+b); ///�L�X��,5����,�᭱\n����
}
