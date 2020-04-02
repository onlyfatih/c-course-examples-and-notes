#include<stdio.h>
int main () {
	/* 
	int getchar(void); karakterin kod numarasını alır.
	int putchar(int); karekterin kod numarasını verir.
	space veya enter tuşlarının da bir kodu vardır.
	*/
	printf("bir sey gir:");
	int ch=getchar();
	int ch2=getchar();
	printf("%d\n%d" , ch , ch2);
}
