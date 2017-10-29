#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL,"Turkish");
	int a=2, b=10, c=50;
	float f=1.05, g=25.5,h=-0.1, yuzde;
	
	printf("\nTAB kullanýlmadan yazýlan tamsayýlar : %d %d %d",a,b,c);
	printf("\nTAB kullanýlarak yazýlan tamsayýlar : \t%d \t%d \t%d",a,b,c);
	
	printf("\nÜç reel sayýnýn tek satýrda yazýlmasý : %f\t%d\t%f",f,g,h);
	printf("\nÜç reel sayýnýn üç satýrda yazýlmasý : \n \n\t%f\n\t%f\n\t%f",f,g,h);
	
	yuzde = (220/25)/100.0;
	printf("\n220 ün %%25 i %f dir",yuzde);
	printf("\n%f/%f iþleminin sonucu = %f\n",g,f,g / f);
	
	printf("\n program sonunda beep sesi çýkar ...\a");
	
	char kelime[20];
	printf("bir kelime girin : ");
	scanf("%s",kelime);
	printf("girilen deger = %s",kelime);
	gets(kelime); // Cümle kullanýlmasý için gereklidir...
	
	float x=2.7;
	x=floor(x);// Aþaðý yuvarlar
	x=ceil(2.3); // Yukarý yuvarlar
	x=sqrt(16);	//Karekökünü alýr
	x=pow(2,3);	//tabanýn üssünü alýr
	
	return 0;
}
