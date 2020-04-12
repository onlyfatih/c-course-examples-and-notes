#include<stdio.h>
// girilen sayinin kac basamak oldugunu veren program //
int basamak(sayi) {
	int basamak=0;
	do 
	{
		sayi/=10;
		basamak++;
	} while(sayi>0);
	return basamak;
}

int main () {
	int sayi;
	
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	
	printf("basamak sayisi:%d" ,basamak(sayi));
}
