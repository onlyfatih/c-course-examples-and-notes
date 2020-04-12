#include<stdio.h>
// kullanicidan bir deger al ve asalligini kontrol et //
int main () {
	int sayi,i,sayac=0;
	
	printf("bir sayi giriniz:");
	scanf("%d" ,&sayi);
	
	for (i=2 ; i<sayi ; ++i) {
		if(sayi%i == 0)
		sayac=1;
		break;
	}	
	if(sayac) 
	printf("%d sayisi asal degildir" , sayi);
	else
	printf("%d sayisi asaldir" , sayi);
}

