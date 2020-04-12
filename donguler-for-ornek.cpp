#include<stdio.h>

int main () {
	for (int i=0 ; i<10 ;) {
		printf("%d " , i);
		i++;
	}
	printf("%d" , (2*i)); // kod calismaz cunku; i'yi dongunun icinde tanimladik sadece dongunun icinde tanimi //
}
