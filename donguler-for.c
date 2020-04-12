#include<stdio.h>

int main () {
	int i=10;
	int j=10;
	
	while(i>0) {
		printf("%d " ,i);
		i--;
	}
	
	printf("\n");
	
	for (j ; j>0 ; j--) { // (baslangic degeri ; kontrol ifadesi ; devam ettrici eylem) //
						   
		printf("%d " ,j);
	}
}
