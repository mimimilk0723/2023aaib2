///week09-1.cpp �F�Ѩ禡�w�q
#include <stdio.h>
int myAdd(int a,int b){ ///�禡�w�q
    return a+b;
}
void myPrint(int a){ ///�禡�w�q
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main() ///mian()�禡
{
    int ans=myAdd(3,4);
    printf("Hello ans: %d\n",ans);
    myPrint(ans); ///�禡�I�s(�ХL���ڰ���)

}
