#include<stdio.h>
int main ()
{
	int saat;
	int dakika;
	int saat1;
	printf("lutfen bir saat ve dakika giriniz:");
	scanf("%d %d" , &saat , &dakika);
	if (saat>12)
	{
		saat1=(saat-12);
		printf("%.2d:%.2d pm" , saat1 , dakika);
	}	
	else
	printf("%.2d:%.2d am" , saat , dakika);
}
