/* Çember alanýný hesaplar */
#include<stdio.h>
#define PI 3.14
int main()
{
	int yaricap;
	float alan;
	printf( "Çemberin yarý çapýný giriniz:");
	scanf( "%d", &yaricap );
	alan = PI * yaricap * yaricap;
	printf( "Çember alaný: %.2f\n", alan );
	return 0;
}
