#include<stdio.h>
#include<limits.h>

int main () {
	unsigned int uval = UINT_MAX ; //isaretli int degerin maxýný bulsaydýk ne cikacaðini bilemezdik cunku;iþaretli intlerde sýnýr degerinin ustu veya altý tanýmsýzdýr //
	
	printf("%u\n" , uval);
	++uval;
	
	printf("%u\n" , uval);
	++uval;

	printf("%u\n" , uval);
	++uval;
	
	printf("%u\n" , uval);
}
