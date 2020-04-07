#include<stdio.h>
int main()
{
	int sayi1,sayi2;
	printf("2 adet sayi giriniz:");
	scanf("%d %d" , &sayi1 , &sayi2);
	if(sayi1 == sayi2)
		printf("2 sayi birbirine esittir\n");
	else
		printf("2 sayi birbirine esit degildir\n");
		
	int sayi3,sayi4;
	printf("\n2 adet sayi giriniz:");
	scanf("%d %d" , &sayi3 , &sayi4);
	if(sayi3 != sayi4)
		printf("2 sayi birbirine esit degildir");
	else
		printf("2 sayi birbirine esittir");
}
