#include<stdio.h>

int main ()
{
	int sayi1 , sayi2;
	printf("lutfen 2 tane sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	
	if (sayi1>sayi2)
		printf("%d sayisi %d sayisindan buyuktur." ,sayi1 , sayi2);
	else if (sayi1==sayi2)
		printf("%d sayisi %d sayisina esittir." ,sayi1 , sayi2);	
	else
		printf("%d sayisi %d sayisindan buyuktur." ,sayi2 , sayi1);
}
