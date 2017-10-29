#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

int main()
{
	int sayi=0;
	int adet=0;
	printf("Sayi giriniz : ");
	scanf("%d",&sayi);
	
	
	for(int i=50; i<200; i++)
	{
		if(i%sayi==0)
			adet++;
		
	}
	printf("Adet: %d",adet);
}
