#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Turkish"); // Türkçe Karakter Kullanabilmek Ýçin Yazýlýr...
	int sonuc=0;
	int ilk=0,son=0;
	int sayac=0;
	int i=2;
	int deger=0;


	printf("\nBir sayi giriniz : ");
	scanf("%d",&ilk);
	printf("\nIkinci sayiyi giriniz : ");
	scanf("%d",&son);
	
	if(ilk<2)
	{
		printf("2 ");
		sonuc+=1;
		ilk=2;
	}
	else{
	}
	
	for(sayac=ilk+1;sayac<son;sayac++)
	{
		deger=0;
		for(i=2;i<sayac-1;i++)
		{
			if(sayac%i==0)
			{
				deger=1;
			}
			else{
			}
		}
		
		if(deger==0)
		{
		sonuc+=1;
		printf("%d ",sayac);
		}
		
		
		
	}
	printf("\nSonuc = %d",sonuc);
	
	printf("\n");
		
	return 0;
}
