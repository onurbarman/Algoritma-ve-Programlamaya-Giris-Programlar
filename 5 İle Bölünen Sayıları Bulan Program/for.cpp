#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	for(int i=0; i<=100; i++)
	{
		if	(i%5==0 && i%10!=0)
			printf("%d \n",i);
	}
	
	
}

