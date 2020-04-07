#include<stdio.h>
int main ()
{
	int ay;
	printf("bir ay (2. veya 3. seklinde) giriniz:");
	scanf("%d",&ay);
	switch (ay)
	{
		case 3:
		case 4:
		case 5:
			printf("bulundugu mevsim ilkbahar..");
			break;
		case 6:
		case 7:
		case 8:
			printf("bulundugu mevsim yaz..");
			break;
		case 9:
		case 10:
		case 11:
			printf("bulundugu mevsim sonbahar..");
			break;
		case 12:
		case 1:
		case 2:
			printf("bulundugu mevsim kis..");
			break;
		default:
			printf("yanlis bir ay girdiniz..");
	}
}
