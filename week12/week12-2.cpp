///week12-2.cpp
#include <stdio.h>
int main()
{
        int n = 2;
        int a[2][2] = {{10,20,30},{11,22,33} };
        int b[2][2] = {{1,2,3},{4,3,2} };
        int c[2][2];
        ///part 1 �|Ū a[i][j] ���]�n,�N���ΦAŪ
        ///part 2 �|Ū a[i][j] ���]�n,�N���ΦAŪ
        for(int i=0;i<n;i++){ ///part 3 �L���
            for(int j=0;j<n;j++){
                int * p1 = & a[i][j];
                printf("%3d", a[i][j] );
            }
        printf("\n");
        }



}
