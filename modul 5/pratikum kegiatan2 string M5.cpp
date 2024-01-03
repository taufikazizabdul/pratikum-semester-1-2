#include <stdio.h>

int main(int argc, char** argv)
{
	char var1[]="INFORMATIKA UMM";
	char huruf ='i';
	int i=0,hasil;
	
	while(var1[i] !='\0' )
	{
		if(var1[i]==huruf)
		{
			hasil =i+1;
		}
		i++;
	}
	printf("karakter '%c' pada kalimat '%s' ditentukan pada huruf ke -%d",huruf,var1,hasil);
	return 0;
}