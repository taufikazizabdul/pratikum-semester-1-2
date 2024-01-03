# include <stdio.h>

float hitung(float rupiah, float matauang)
{
	float hasil;
	hasil = rupiah / matauang;
	return hasil;
	
}

int main()
{
	int rupiah_A = 9080;
	int rupiah_B = 7856;
	int rupiah_C = 8612021;

	int const dolar = 14764;
	int const euro = 17296;
	int const ringgit = 3540;
	
	
	printf("NIM : 202010370311135 \n");
	
	printf("\nKonversi rupiah A adalah %d rupiah sama dengan : \n%0.2f dollar \n%0.2f euro \n%0.2f ringgit \n",rupiah_A, hitung(rupiah_A, dolar), hitung(rupiah_A,euro), hitung(rupiah_A, ringgit));
	printf("\nKonversi rupiah B adalah %d rupiah sama dengan :\n%0.2f dollar \n%0.2f euro \n%0.2f ringgit \n", rupiah_B, hitung(rupiah_B, dolar), hitung(rupiah_B, euro), hitung(rupiah_B, ringgit));
	printf("\nKonversi rupiah C adalah %d rupiah sama dengan :\n%0.2f dollar \n%0.2f euro \n%0.2f ringgit \n", rupiah_C, hitung(rupiah_C, dolar), hitung(rupiah_C, euro), hitung(rupiah_C, ringgit));
	return 0;
}