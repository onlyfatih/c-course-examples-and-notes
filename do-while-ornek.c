#include<stdio.h>
// do while'i while'dan ayiran tek ozellik ilk basta kosul kontrol etmeden girileni basmasidir //
int main () {
	int sayi;
	printf("bir sayi giriniz:"); // "-" bir deger gir ve gor //
	scanf("%d" , &sayi);
	
	do {
		printf("%d\n" , sayi);
		sayi--;
	} while (sayi>0);
}
