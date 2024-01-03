#include <stdio.h>
#include <string.h>

int main(){
	char namaDepan[20], namaBelakang[20], nim[20], nama_lengkap;
	int jumlah_nim;
	
	printf("masukkan Nama Depan: ");
	scanf("%s", &namaDepan);
	fflush(stdin);
	printf("masukkan Nama Belakang: ");
	scanf("%s", &namaBelakang);
	fflush(stdin);
	
	inputNim:
	printf("Masukkan Nim: ");
	scanf("%s", &nim);
	fflush(stdin);
	
	jumlah_nim = strlen(nim);
	
	if(jumlah_nim == 15){
		printf("selamat %s, data kamu berhasil dibuat\n", namaDepan);
		
	    nama_lengkap = strcat(namaDepan, namaBelakang);	
		
		printf("=======================================\n");
	    printf("Nama lengkap: %s\n", nama_lengkap);
	    printf("Nim: %s\n", nim );
	    printf("=======================================\n");
		
	}else{
		printf("Nim harus berjumlah 15 digit\n");
		goto inputNim;
	}
	
	
	return 0;
}