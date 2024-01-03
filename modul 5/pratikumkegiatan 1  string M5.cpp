#include <stdio.h>

int main(int argc, char** argv)
{
	char var1[]="universitas";
	char var2[]="muhammadiyah malang";
	
	printf ("%s%s",var1,var2);
	
	 //jika menggunakan fungsi seperti pada line 8,maka output akan keluar langsung sehingga lebih sederhana dan simple
	
	//jika menggunakan fungsi strcat seperti dibawah ini dengan mengilangkan %s dan var2 pada fungsi printf
	//strcat(var1,var2);menggabungakn 2 string
	//printf("%s",var1);
	return 0;
}