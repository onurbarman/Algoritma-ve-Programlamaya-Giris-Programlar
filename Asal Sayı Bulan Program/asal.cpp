#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main () 
{
	int sayi=0;
	int deger=0;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	for	(int i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			deger=1;
		}	
		else{
		}
	}
	if	(deger==0)
	{
		printf("Sayi asaldir");
	}	
	else
	{
		printf("Sayi asal degil");
	}
		
}
