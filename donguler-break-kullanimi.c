#include<stdio.h>
// break kullanimi //
int main () {
	int sayi=44;
	while (sayi>2) {
		printf("%d " , sayi);
		if(sayi%9 == 0)
			break;
		sayi--;
	}	
}
