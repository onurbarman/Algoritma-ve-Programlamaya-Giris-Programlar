#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL,"Turkish");
	int a=2, b=10, c=50;
	float f=1.05, g=25.5,h=-0.1, yuzde;
	
	printf("\nTAB kullan�lmadan yaz�lan tamsay�lar : %d %d %d",a,b,c);
	printf("\nTAB kullan�larak yaz�lan tamsay�lar : \t%d \t%d \t%d",a,b,c);
	
	printf("\n�� reel say�n�n tek sat�rda yaz�lmas� : %f\t%d\t%f",f,g,h);
	printf("\n�� reel say�n�n �� sat�rda yaz�lmas� : \n \n\t%f\n\t%f\n\t%f",f,g,h);
	
	yuzde = (220/25)/100.0;
	printf("\n220 �n %%25 i %f dir",yuzde);
	printf("\n%f/%f i�leminin sonucu = %f\n",g,f,g / f);
	
	printf("\n program sonunda beep sesi ��kar ...\a");
	
	char kelime[20];
	printf("bir kelime girin : ");
	scanf("%s",kelime);
	printf("girilen deger = %s",kelime);
	gets(kelime); // C�mle kullan�lmas� i�in gereklidir...
	
	float x=2.7;
	x=floor(x);// A�a�� yuvarlar
	x=ceil(2.3); // Yukar� yuvarlar
	x=sqrt(16);	//Karek�k�n� al�r
	x=pow(2,3);	//taban�n �ss�n� al�r
	
	return 0;
}
