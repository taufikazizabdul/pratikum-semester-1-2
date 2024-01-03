#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	int saldo;
    long int non_tabung,nom_ambil,pin,pilih_menu;
    char nama,alamat,iya;
system("cls");
printf("\n|===========================================================|");
printf("\n|            Selamat Datang Di Bank Nasional                |");
printf("\n|===========================================================|");
printf("\n|Silahkan Pilih Menu Di Bawah Ini Untuk Melakukan Transaksi |");
printf("\n|===========================================================|");
printf("\n|1. Tekan (1) Mendaftarkan Diri Sebagai Nasabah             |");
printf("\n|2. Tekan (2) Menabung                                      |");
printf("\n|3. Tekan (3) Melakukan Penarikan                           |");
printf("\n|4. Tekan (4) Cek Saldo                                     |");
printf("\n|===========================================================|");
printf("\nMasukan Pilihan Anda : "); 
scanf("pilih_menu");

switch(pilih_menu)
{
case 1:
{
	system("cls");
	printf("=======================================================================");
	printf("   Silahkan Daftarkan Diri Anda Sebagai Nasabah di Bank Nasional      ");
	printf("=======================================================================");
	printf(" Saldo Awal Minimal Rp.100.000,00");
    printf(" Masukan Nama Anda   : "); 
	scanf("%s\n",&nama);
    printf(" Masukan Alamat Anda : "); 
	scanf("%s\n",&alamat);
    printf(" Input Nominal       : "); 
	scanf("%d\n",&saldo);
	if(saldo>100000)
	{
		printf("=============================================================\n");
		printf("|                      Bank Nasional                        |\n");
        printf("=============================================================\n");
        printf(" ");
        printf(" ");
        printf("Saldo Rekening Anda Rp.");
		printf("%d",saldo);
        printf("=============================================================\n");
        printf("\n");
        printf("Transaksi Lainnya (Y/T) :"); 
		scanf("iya");
		if(iya=='Y'||'y')
		{
			goto awal;
		}
		else if(iya=='T'||'t')
		{
			goto akhir;
		}
	}
	else
	{
		printf("Maaf Nominal yang Anda Inputkan Tidak Memenuhu Syarat\n");
		printf("Transaksi Lainya (Y/T) :");
		scanf("iya");
		if(iya=='Y'||'y')
		{
			goto awal;
		}
		else if(iya=='T'||'t')
		{
			goto akhir;
		}
	}
}
	break;
default:
	break;
}
   
	return 0;
} 