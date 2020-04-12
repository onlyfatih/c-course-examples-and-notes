#include<stdio.h>

int toplam(int sayi1 , int sayi2) {
	int toplam = sayi1 + sayi2;
	return toplam;
}

int main () {
	int sayi1 , sayi2;
	printf("2 sayi giriniz:");
	scanf("%d %d" , &sayi1 , &sayi2);
	printf("toplam=%d" , toplam(sayi1,sayi2));
}
