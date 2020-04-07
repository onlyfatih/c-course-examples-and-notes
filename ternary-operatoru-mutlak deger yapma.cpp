#include<stdio.h>
int main ()
{
	int sayi;
	int mutlak;
	printf("sayi gir:");
	scanf("%d" , &sayi);
	
	mutlak = (sayi<0 ? -1*sayi : sayi); // -1*sayi daolur -sayi de olur ama -*sayi olmaz //
	printf("\nmutlak=%d" , mutlak);
	
}
