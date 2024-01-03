#include <conio.h>
#include <stdio.h>
int main(int argc, char** argv)
{
    int jumlah_barang,harga_barang,diskon,total_bayar,pembayaran,uang_kembalian;
	int pilih;
	
	
	printf("\t=================================\n");
	printf("\t\t<<< ABDULMARKET >>>\n");
	printf("\t~~~WELCOME TO ABDULMAREKT~~~\n");
	printf("\t=================================\n");
	
	printf(" MENU PAKET :\n");
	printf("1.PAKET A :(beras + minyak + telur + gula :Rp.100.000,-)\n");
	printf("2.PAKET B :(beras + minyak + telur + sabun :Rp.100.000,-)\n");
	printf("3.PAKET C :(beras + minyak + telur + gula + mie instan :Rp.125.000,-)\n");
	printf("4.PAKET D :(beras + minyak + telur + gula mie instan + cemilan :Rp.150.000,-)\n");
	printf("5.PAKET E :(beras + minyak + telur + gula mie instan + cemilan + rokok :Rp.200.000,-)\n ");
	printf("masukkan pilihan menu :");
	scanf("%d",jumlah_barang);
 
    if(pilih==1){
		printf("ANDA MEMILIH PAKET A \n");
		printf("============================");
		printf("masukkan jumlah barang yang dibeli =");
		scanf("%d",&jumlah_barang);
		harga_barang=100000;
		total_bayar=harga_barang*jumlah_barang;
	}

	return 0;
}