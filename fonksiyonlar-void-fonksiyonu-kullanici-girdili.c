#include<stdio.h>
// GER� DONUS DEGER� OLMAYAN FONKS�YONLAR �C�N VO�D FONKS�YONU KULLANIRIZ //
// void fonksiyonunda return d�nd�r�lebilir ancak geri d�n�� degeri d�ndermemek sartiyla //
void fonk(int deger) {
	printf("sonuc:%d" ,(deger*3)+2);
}
int main () {	
	int deger;
	printf("bir deger giriniz:");
	scanf("%d",&deger);
	fonk(deger);
}
