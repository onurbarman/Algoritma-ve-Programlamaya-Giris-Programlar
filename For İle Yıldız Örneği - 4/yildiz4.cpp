#include <stdio.h>
#include <conio.h>

main()
{
	int adet=2;
	int bosluk=17;
	
	for	(int satir=0;satir<5;satir++)
	{
	
		
			
			
		for	(int k=0; k<adet/2 ; k++)
			printf("*");
	
		
		for	(int j=0; j<bosluk ; j++)
			printf(" ");
			
		for	(int k=0; k<adet/2 ; k++)
			printf("*");
		
	printf("\n");
	adet+=4;
	bosluk-=4;
	}	
			
			
	printf("\n");
	
	
}
