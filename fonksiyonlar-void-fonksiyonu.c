#include<stdio.h>
// GER� DONUS DEGER� OLMAYAN FONKS�YONLAR �C�N VO�D FONKS�YONU KULLANIRIZ //
// void fonksiyonunda return d�nd�r�lebilir ancak geri d�n�� degeri d�ndermemek sartiyla //
void fonk(int deger) {
	int sonuc=(deger*3)+2;
	printf("sonuc:%d" , sonuc);
}
int main () {	
	fonk(3);
}
