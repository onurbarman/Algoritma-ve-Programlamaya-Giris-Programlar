#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	char kelime[20]="";
	int adet=0;
	printf("Bir kelime girin : ");
	scanf("%s",kelime);
	printf("ekrana yazilma adetini girin:");
	scanf("%d",&adet);
	
	
	for (int i=0; i < adet; i++)
	{
		printf("%s \n", kelime);
	}
}
