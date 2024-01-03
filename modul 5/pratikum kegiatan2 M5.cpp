#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char var1[]="INFORMATIKA UMM";
	char huruf ='i';
	char*hasil;
	hasil=strchr(var1,huruf);
	//menggunakan fungsi strchr pada line 9 lebih mudah dan lebih sederhana dari pada menggunakan percabangan dan perulangan

	printf("karakter '%c' pada kalimat '%s' ditentukan pada huruf ke -%d",huruf,var1,hasil-var1);
	return 0;
}