#include<stdio.h>
// GERÝ DONUS DEGERÝ OLMAYAN FONKSÝYONLAR ÝCÝN VOÝD FONKSÝYONU KULLANIRIZ //
// void fonksiyonunda return döndürülebilir ancak geri dönüþ degeri döndermemek sartiyla //
void fonk(int deger) {
	printf("sonuc:%d" ,(deger*3)+2);
}
int main () {	
	int deger;
	printf("bir deger giriniz:");
	scanf("%d",&deger);
	fonk(deger);
}
