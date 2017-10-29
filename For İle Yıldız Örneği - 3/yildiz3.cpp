#include <stdio.h>
#include <conio.h>

main()
{
	int adet=1;
	int bosluk=5;
	
	for	(int satir=0;satir<5;satir++)
	{
	
		for	(int j=0; j<bosluk ; j++)
			printf(" ");
			
			
		for	(int k=0; k<adet ; k++)
		{
			printf("*");
	
		}
		
	printf("\n");
	adet+=2;
	bosluk--;
	}	
			
			
	printf("\n");
	
	
}
