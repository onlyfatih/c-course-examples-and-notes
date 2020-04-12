#include<stdio.h>
// (TÜR ÝSMÝ)ÝFADE.. 
//ORNEK: ((double)ival1/ival2) 
/*
int main () {
	int ival1=10;
	int ival2=4;
	
	double result=ival1/ival2;
	
	printf("%f" , result);
	
	// SONUC 2 CÝKAR //
}
*/

int main () {
	int ival1=10;
	int ival2=4;
	
	double result=(double)ival1/ival2; // (double)(ival1/ival2) islem onceligi sebebiyle once parantez ici yapilir ve sonuc 2 cikar //
	
	printf("%f" , result);
	
	// SONUC 2.5 CÝKAR //
}
