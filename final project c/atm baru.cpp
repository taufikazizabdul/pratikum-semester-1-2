#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void welcome(); //Deklarasi fungsi welcome()
//VARIABEL GLOBAL
int pin, pin1 = 111000;
char *akunATM, akun1[] = "John Doe";
unsigned long long int saldo = 0, saldo1 = 500000;
unsigned long long int rek = 0, rek1 = 2210171040; //nomor rekening
int main()
{
  welcome(); //Memanggil fungsi welcome()
}
void welcome() //fungsi welcome
{
	int inputpin;
  printf("|===========================================================|\n");
  printf("|               SELAMAT DATANG DI BANK BERSAMA              |\n");
  printf("|===========================================================|\n");
  printf("\n");
  printf("SILAHKAN MASUKKAN PIN :\n");
  printf("\n\n\t\t\t      "); 
  scanf("%d",&inputpin);
}
void verifikasi(int p,int *InputPIN)
{
	char **akunAktif;
 if(p == pin1)
 {
  *inputPin  = p; 
//Memindahkan isi variabel p ke variabel pointer
  akunAktif  = &akunATM; 
//Menyimpan alamat variabel akunATM ke akunAktif
  *akunAktif = (char*) malloc(100 * sizeof(char));
//Mengalokasikan memori sebanyak 100 byte untuk tipe data char
  strcpy(*akunAktif, akun1);
//Memindahkan isi variabel akun1 ke variabel pointer
  printf("\nNama akun : %s\n", akunATM);
//Mencetak isi variabel akunATM
 }
 else
 {
  welcome();
 }
}
}