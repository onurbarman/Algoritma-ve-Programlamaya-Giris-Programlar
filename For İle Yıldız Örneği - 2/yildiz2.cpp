#include <stdio.h>
#include <conio.h>

main()
{
	int adet=7;
	int bosluk=1;
	
	for	(int satir=0;satir<5;satir++)
	{
	
		for	(int j=0; j<bosluk ; j++)
			printf(" ");
			
			
		for	(int k=0; k<adet ; k++)
		{
			printf("*");
	
		}
		
	printf("\n");
	adet--;
	bosluk++;
	}	
			
			
	printf("\n");
	
	
}
