///week04-5.cpp CPE-0102A, �n�ݤ��P���ƪ��k
///ALLman(ANSI), Java,K&R(C�o����),Stroustrup(C++�o����)
#include <stdio.h>
int main() {
    int n,a,b;
    scanf("%d",&n); ///��n�����
    for(int i=0; i<n; i++) { ///�j��]�X��
        scanf("%d",&a); ///�Ʀra: �٦�a�ӼƦr
        int ans=0; ///�j��e��int ans=0
        for(int j=0; j<a; j++) { ///Ū�Ja�ӼƦr
            scanf("%d",&b);///Ū�J�Ʀrb
            ans += b;///�j��̭� ans+=b

        }
        printf("%d\n",ans);///�j��᭱,�⵪�צL�X��
    }
}
