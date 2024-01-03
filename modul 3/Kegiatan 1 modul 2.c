#include <stdio.h>

	int rupiah_a = 11472;
	int rupiah_b = 7856;
	int rupiah_c = 8612021;
	
//A
	float nilai_dolar_a, nilai_euro_a, nilai_ringgit_a;

float konv_dolar_a(int rupiah_a)
{
	float nilai_dolar_a;
	nilai_dolar_a = rupiah_a*0.000068;
	return nilai_dolar_a;
}

float konv_euro_a(int rupiah_a)
{
	float nilai_euro_a;
	nilai_euro_a = rupiah_a*0.000058;
	return nilai_euro_a;
}

float konv_ringgit_a(int rupiah_a)
{
	float nilai_ringgit_a;
	nilai_ringgit_a = rupiah_a*0.00028;
	return nilai_ringgit_a;
}
//B
	float nilai_dolar_b, nilai_euro_b, nilai_ringgit_b;

float konv_dolar_b(int rupiah_b)
{
	float nilai_dolar_b;
	nilai_dolar_b = rupiah_b*0.000068;
	return nilai_dolar_b;
}

float konv_euro_b(int rupiah_b)
{
	float nilai_euro_b;
	nilai_euro_b = rupiah_b*0.000058;
	return nilai_euro_b;
}

float konv_ringgit_b(int rupiah_b)
{
	float nilai_ringgit_b;
	nilai_ringgit_b = rupiah_b*0.00028;
	return nilai_ringgit_b;
}

//C
	float nilai_dolar_c, nilai_euro_c, nilai_ringgit_c;

float konv_dolar_c(int rupiah_c)
{
	float nilai_dolar_c;
	nilai_dolar_c = rupiah_c*0.000068;
	return nilai_dolar_c;
}

float konv_euro_c(int rupiah_c)
{
	float nilai_euro_c;
	nilai_euro_c = rupiah_c*0.000058;
	return nilai_euro_c;
}

float konv_ringgit_c(int rupiah_c)
{
	float nilai_ringgit_c;
	nilai_ringgit_c = rupiah_c*0.00028;
	return nilai_ringgit_c;
}

int main()
{
	
	
	printf("NIM : 202010370311434");
	
	printf("\n\nKonversi Rupiah A adalah %d rupiah sama dengan : ",rupiah_a);
	float nilai_dolar_a= konv_dolar_a(rupiah_a);
	float nilai_euro_a = konv_euro_a(rupiah_a);
	float nilai_ringgit_a = konv_ringgit_a(rupiah_a);
	printf("\n %.2f dollar \n %.2f euro \n %.2f ringgit \n", nilai_dolar_a, nilai_euro_a, nilai_ringgit_a);

	
	printf("\n\nKonversi Rupiah B adalah %d rupiah sama dengan : ",rupiah_b);
	float nilai_dolar_b= konv_dolar_b(rupiah_b);
	float nilai_euro_b = konv_euro_b(rupiah_b);
	float nilai_ringgit_b = konv_ringgit_b(rupiah_b);
	printf("\n %.2f dollar \n %.2f euro \n %.2f ringgit \n", nilai_dolar_b, nilai_euro_b, nilai_ringgit_b);

	
	printf("\n\nKonversi Rupiah C adalah %d rupiah sama dengan : ",rupiah_c);
	float nilai_dolar_c= konv_dolar_c(rupiah_c);
	float nilai_euro_c = konv_euro_c(rupiah_c);
	float nilai_ringgit_c = konv_ringgit_c(rupiah_c);
	printf("\n %.2f dollar \n %.2f euro \n %.2f ringgit \n", nilai_dolar_c, nilai_euro_c, nilai_ringgit_c);

	return 0;	
}