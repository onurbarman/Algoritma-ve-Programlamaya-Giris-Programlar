#include <stdio.h>
#include <conio.h>

main()
{
	int adet=9;
	int bosluk=1;
	
	int adet2=1;
	int bosluk2=5;
	
	for	(int satir=0;satir<5;satir++)
	{
	
		for	(int j=0; j<bosluk ; j++)
			printf(" ");
			
		for	(int k=0; k<adet ; k++)
			printf("*");
	
		for	(int k=0; k<bosluk ; k++)
			printf(" ");
		
			
		
		
	printf("\n");
	adet-=2;
	bosluk+=2;
	}
	
	for	(int satir=0;satir<5;satir++)
	{
	
		for	(int j=bosluk2; j>0 ; j--)
			printf(" ");
			
		for	(int k=0; k<adet2 ; k++)
			printf("*");
	
		for	(int k=bosluk2; k>0 ; k--)
			printf(" ");
		
			
		
		
	printf("\n");
	adet2+=2;
	bosluk2-=2;
	}
	
	
}
