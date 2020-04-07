#include<stdio.h>
int main ()
{
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	
	if (20<sayi<30) // boyle bir sey yok sadece sol tarafý alýr öncelik sýrasý soldan saga dogru oldugu icin (25 de saglar 45 de) //
		printf("dogru");
	else
		printf("dogru degil");
		
	int sayi2;
	printf("\nbir sayi giriniz:");
	scanf("%d" , &sayi2);
	
	if(20<sayi2 && sayi2<30) // 2 kosulu da saglamasý gerekiyor "&&" ve operatörü ile //
		printf("dogru");
	else
		printf("dogru degil");	
		
	int sayi3;
	printf("\nbir sayi giriniz:");
	scanf("%d" , &sayi3);
	
	if(20<sayi3 || sayi3<30) // 1 kosulu saglamasý yeterlidir "||" veya operatörü ile //
		printf("dogru");
	else
		printf("dogru degil");
	
	
}
