#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	char kelime[20]="";
	printf("Bir kelime girin : ");
	scanf("%s",kelime);
	
	for (int i=0; i < 10; i++)
	{
		printf("%s \n", kelime);
	}
}
