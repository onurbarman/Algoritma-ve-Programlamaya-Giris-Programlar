#include <stdio.h>
#include <conio.h>

main()
{
	int adet=2;
	int bosluk=1;
	int sayi=5;
	
	for	(int satir=0;satir<5;satir++)
	{
		for	(int i=0; i<bosluk ; i++)
			printf(" ");
			
			for	(int k=sayi; k>0 ; k--)
				printf("%d",k);
				
			for	(int m=1; m<=sayi ; m++)
				printf("%d",m);	
			
		
	printf("\n");
	bosluk+=1;
	sayi--;
	}	
			
	
	
}
