#include<stdio.h>
#include<limits.h>

int main () {
	unsigned int uval = UINT_MAX ; //isaretli int degerin max�n� bulsayd�k ne cikaca�ini bilemezdik cunku;i�aretli intlerde s�n�r degerinin ustu veya alt� tan�ms�zd�r //
	
	printf("%u\n" , uval);
	++uval;
	
	printf("%u\n" , uval);
	++uval;

	printf("%u\n" , uval);
	++uval;
	
	printf("%u\n" , uval);
}
