#include<stdio.h>
// faktoriyel hesabi yapan program //
int faktoriyel(sayi) {
	int toplam=1;
	while (sayi>1)
	{
		toplam*=sayi;
		sayi--;
	}
	return toplam;
}

int main () {
	int sayi;
	printf("bir sayi gir:");
	scanf("%d" , &sayi);
	printf("%d!=%d" , sayi , faktoriyel(sayi));
}
