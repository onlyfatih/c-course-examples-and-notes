#include<stdio.h>
//1'den baslayarak kullanýcýn girecegi sayiya kadar ardisik toplayan program//
int main () {
	int sayi,toplam=0,i=1;
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	while (i<=sayi){
		toplam=toplam+i;
		i++;
	}
	printf("ardisik sayilarin toplami=%d" ,toplam);
}


