#include<stdio.h>
int main () {
	int x , y , z;
	printf(" 3 adet integer sayi giriniz:");
	int d=scanf("%d %d %d" , &x , &y , &z );
	
	printf("x=%d , y=%d , z=%d\n ",x , y ,z );

	printf("scanf geri donus degeri:%d" , d); // BASARILI OLDUGU SET ETTÝÐÝ DEÐER
}
