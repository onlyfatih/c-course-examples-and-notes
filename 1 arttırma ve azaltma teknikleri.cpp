#include<stdio.h>
int main () 
{
	int i = 10 , j=10 , k=10 , t=10;
	i=i+1;
	k+=1;
	printf("i=%d\nj=%d\nk=%d\nt=%d\n" , i , ++j , k , t++); //"++sayi" sayiyi 1 artt�rman�n en mant�kl� yoldur "sayi++"dan fark�//
	printf("t=%d",t);										//�nce artt�r�p sonra yazd�rmas�d�r , "sayi++" ise �nce yazd�r�r sonra artt�r�r. //
	//BUNLARIN HEPS� "-" OPERAT�R� ���N DE GE�ERL�D�R//
}
