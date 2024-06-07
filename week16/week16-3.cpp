#include <string.h>
#include <stdio.h>
int main()
{
	char a[80];
	scanf("%s",a);
	int N=strlen(a);
	int bad=0;
	for(int i=0;i<N/2;i++){
		if( a[i] != a[N-1-i] ) bad=1;
		}
	if(bad==1)
	printf("NO");
	else
	printf("YES");
}
