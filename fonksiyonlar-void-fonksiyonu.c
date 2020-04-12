#include<stdio.h>
// GERÝ DONUS DEGERÝ OLMAYAN FONKSÝYONLAR ÝCÝN VOÝD FONKSÝYONU KULLANIRIZ //
// void fonksiyonunda return döndürülebilir ancak geri dönüþ degeri döndermemek sartiyla //
void fonk(int deger) {
	int sonuc=(deger*3)+2;
	printf("sonuc:%d" , sonuc);
}
int main () {	
	fonk(3);
}
