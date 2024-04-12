///week08-4b.cpp JY-E-03
#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("請輸入蝸牛欲爬行的高度：");
	//your code
	scanf("%d",&h);
	while(h>0){ ///還有高度要爬的話,就在迴圈裡做
	day++; ///又多了一天
	h -= 5; ///剩下的高度變少了
	if(h<0) break; ///如果超過頂端,飛天了 break離開迴圈
	h+=2; ///沒有離開的話,晚上就又多了2公尺要爬,好可憐QQ
	}
    printf("%d天可爬到頂端",day);
}
