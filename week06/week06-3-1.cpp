//SLJ-Looping-003
#include <stdio.h>
int main()
{
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	printf("%d",a);	//0-th
	for(int i=1;i<n;i++){
		a+=b;
		printf(",%d",a);
	}
}
