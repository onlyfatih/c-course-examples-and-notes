#include<stdio.h>
int main () {
	/* 
	int getchar(void); karakterin kod numaras�n� al�r.
	int putchar(int); karekterin kod numaras�n� verir.
	space veya enter tu�lar�n�n da bir kodu vard�r.
	*/
	printf("bir sey gir:");
	int ch=getchar();
	int ch2=getchar();
	printf("%d\n%d" , ch , ch2);
}
