#include<stdio.h>

int ardisik(int sayi) {
	int toplam=0;
	while (sayi>0)
	{
		toplam+=sayi;
		sayi--;
	}
	return toplam;
}

int main () {
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("toplam=%d" , ardisik(sayi));
}

