///week08-4b.cpp JY-E-03
#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("�п�J���������檺���סG");
	//your code
	scanf("%d",&h);
	while(h>0){ ///�٦����׭n������,�N�b�j��̰�
	day++; ///�S�h�F�@��
	h -= 5; ///�ѤU�������ܤ֤F
	if(h<0) break; ///�p�G�W�L����,���ѤF break���}�j��
	h+=2; ///�S�����}����,�ߤW�N�S�h�F2���حn��,�n�i��QQ
	}
    printf("%d�ѥi���쳻��",day);
}
