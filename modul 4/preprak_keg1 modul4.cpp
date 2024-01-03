#include <stdio.h>
#define SIZE 3

int main(int argc, char** argv)
{
	char karakter[SIZE];
	int i;
	printf("\t\t<<<TAUFIK ABDUL AZIZ>>>\n\n");
	
	printf("masukkan 3 karakter sembarang :");
	for(i=0;i<=(SIZE);i=1+i)
	{
		scanf("%c",karakter);
	}
	printf("karakter dalam urutan terbalik :");
	for(i=SIZE-1;i>=0;i=i-1)
	{
		scanf("%c",karakter);
	}
	printf("\n");
	printf("%c\t",karakter);
	return 0;
}