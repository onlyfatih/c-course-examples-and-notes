#include<stdio.h>
 int main ()
 {
 	int sayi1,sayi2,sayi3,enbuyuk;
 	printf("lutfen 3 tane sayi giriniz:");
 	scanf("%d %d %d" , &sayi1 , &sayi2 , &sayi3);
 	
 	if (sayi1>sayi2)
 		if(sayi1>sayi3)
			enbuyuk=sayi1;
		else
			enbuyuk=sayi3;
	else /* (sayi2>sayi1) */
		if(sayi2>sayi3)
			enbuyuk=sayi2;
		else
			enbuyuk=sayi3;
	printf("en buyuk sayi:%d" , enbuyuk);
 }
 
 
