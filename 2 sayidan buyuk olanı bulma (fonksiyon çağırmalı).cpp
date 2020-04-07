#include<stdio.h>
int MaxOfValue(int x , int y)
{
	if (x>y)
		return x;
	else
		return y;
}
int main ()
{
	int sayi1 , sayi2;
	printf("lutfen 2 tane sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	printf("buyuk deger:%d" , MaxOfValue(sayi1,sayi2));
}
