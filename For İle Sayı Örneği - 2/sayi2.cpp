#include <stdio.h>
#include <conio.h>

main()
{
	int bosluk=1;
	int sayi=5;
	
	for(int satir=0;satir<5;satir++)
	{
		for	(int i=0; i<bosluk ; i++)
			printf(" ");
			
		for	(int k=1; k<=sayi ; k++)
			printf("%d",k);
			
		
	printf("\n");
	bosluk+=1;
	sayi--;
	}	
	
	bosluk=5;
	sayi=1;
	int deger=5;
	
	for(int satir=0;satir<5;satir++)
	{
		for	(int i=bosluk; i>0 ; i--)
			printf(" ");
			
		for	(int k=deger; k<=5 ; k++)
		{
			printf("%d",k);
		}
			
			
		
	printf("\n");
	bosluk-=1;
	sayi++;
	deger--;
	}	
	
	
}
