#include<stdio.h>
#include<conio.h>
int main()
{
	int islem;
	float bolme ,  sayi1 , sayi2 ,toplama , cikarma , carpma ;
	printf("ondalik sayilari '.' ile yaziniz.\n");
	printf("lutfen 2 tane sayi giriniz:");
	scanf("%f %f" , &sayi1 , &sayi2);
	
	printf("1)toplama\n2)cikarma\n3)carpma\n4)bolme\n");
	scanf("%d", &islem);
	
	toplama=(float)sayi1+sayi2;
	cikarma=(float)sayi1-sayi2;	
	carpma=(float)sayi1*sayi2;			
	bolme=(float)sayi1/sayi2;
	
	switch(islem)
	{
		case 1: printf("sonuc:%.2f" , toplama);
			break;
		case 2: printf("sonuc:%.2f" , cikarma);
			break;
		case 3: printf("sonuc:%.2f" , carpma);
			break;
		case 4: printf("sonuc:%.2f" , bolme);
			if (sayi2 == 0)
				printf("\npayda 0 olamaz");  // sacma sapan deger çýkýyor 0 ile bölünce buffer sebebiyle çalýþ //
			break;
		default: 
			printf("yanlis bir islem yaptiniz..");
			break;
	}
	getch ();
	return 0;
}
