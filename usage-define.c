/* �ember alan�n� hesaplar */
#include<stdio.h>
#define PI 3.14
int main()
{
	int yaricap;
	float alan;
	printf( "�emberin yar� �ap�n� giriniz:");
	scanf( "%d", &yaricap );
	alan = PI * yaricap * yaricap;
	printf( "�ember alan�: %.2f\n", alan );
	return 0;
}
