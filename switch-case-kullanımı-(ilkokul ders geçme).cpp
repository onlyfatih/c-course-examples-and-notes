#include<stdio.h>
int main ()
{
	int nott;
	printf("lutfen ogrencinizin notunu giriniz:");
	scanf("%d" , &nott);
	
	switch (nott)
	{
		case 5:
		case 4:
		case 3:
			printf("sinifi gectiniz tebrikler..");
			break;
		case 2:
		case 1:
		case 0:
			printf("sinif tekrari gecmis olsun..");
			break;
		default:
			printf("yanlis bir not girdiniz..");
	}
}
