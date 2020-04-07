#include<stdio.h>
int main () 
{
	int i = 10 , j=10 , k=10 , t=10;
	i=i+1;
	k+=1;
	printf("i=%d\nj=%d\nk=%d\nt=%d\n" , i , ++j , k , t++); //"++sayi" sayiyi 1 arttýrmanýn en mantýklý yoldur "sayi++"dan farký//
	printf("t=%d",t);										//önce arttýrýp sonra yazdýrmasýdýr , "sayi++" ise önce yazdýrýr sonra arttýrýr. //
	//BUNLARIN HEPSÝ "-" OPERATÖRÜ ÝÇÝN DE GEÇERLÝDÝR//
}
