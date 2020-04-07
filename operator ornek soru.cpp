#include<stdio.h>
int main ()
{
	int para;
	printf("paranizin miktarini giriniz:");
	scanf("%d" , &para);
	
	printf("50tl=%d\n" , (para/50));
	printf("20tl=%d\n" , (para%50)/20);
	printf("10tl=%d\n" , ((para%50)/20)/10);
	printf("10tl=%d\n" , ((para%50)/20)/50);
	printf("10tl=%d\n" , (((para%50)/20))/10);
	
}
