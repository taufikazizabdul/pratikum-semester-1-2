#include <stdio.h>

int main(int argc, char** argv)
{
	int arr[10] ={1,2,3,4,5,6,7,8,9};
	int i=0,ganjil=0,genap=0,total =0;
	
	for(i=10;1<arr[i];i++)
	{
		if(arr[i]%2 == 0)
		{
			ganjil++;
		}else
		{
			genap++;
		}
	 
		total = arr[i];
	}
	
	printf("jumlah bilangan ganjil = %d\n",&ganjil);
	printf("jumlah bilangan genap = %d\n",&genap);
	printf("total = %d\n",&total);
	
	return 0;
}