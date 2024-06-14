#include <string.h>
#include <stdio.h>
int main()
{
	char a[30];
	char b[30];
	scanf("%s%s",a,b);
	int N=strlen(a);
	int V=strlen(b);
	if(N>V)	printf("1");
	else if(V>N) printf("-1");
	else ("%d",strcmp(a,b));
}
