#include<stdio.h>
int main()
{
	float sayi1,sayi2,sayiort;
	printf("lutfen 2 sayi giriniz:");
	scanf("%f %f",&sayi1,&sayi2);
	
	sayiort=(float)(sayi1+sayi2)/2;
	printf("aritmetik ortalama:%.2f" , sayiort);
}
