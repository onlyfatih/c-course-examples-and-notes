#include<stdio.h>
int main ()
{
	int grade; //grade:not
	int x;
	x = printf("lutfen ogrencinizin notunu giriniz:");
	scanf("%d" , &grade);
	
	switch (grade)
	{
		case 1:
			printf("ogrencinizin notu:%d == cok kotu\n" , grade);
			break;
		case 2: 
			printf("ogrencinizin notu:%d == kotu" , grade);
			break;
		case 3:
			printf("ogrencinizin notu:%d == orta" , grade);
			break;
		case 4:
			printf("ogrencinizin notu:%d == iyi" , grade);
			break;
		case 5:
			printf("ogrencinizin notu:%d == pekiyi" , grade);
			break;
		default:
			printf("yanlis bir not girdiniz..");
		
		
	}
}
