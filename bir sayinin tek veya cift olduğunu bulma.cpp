#include<stdio.h>
int main ()
{
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d" , &sayi);
	if(sayi % 2 == 0)
		printf("cift sayi");
	else
		printf("tek sayi");
}
