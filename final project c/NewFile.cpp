#include <stdlib.h>
#include <stdio.h>


int pw,saldoA,pilihan,pilih,saldo,rek,nom,tarik;
char select,user[20];	

int main(void){

printf(" *========================================================* \n");
printf(" *=                       MINI ATM                       =* \n");
printf(" *========================================================* \n");
printf("\n");
printf("Silahkan Login Untuk Melanjutkan Transaksi \n");
printf("\n");
printf("Username : "); scanf("%s", &user);
printf("Password : "); scanf("%d", &pw);
system("cls");

printf("Selamat Datang Di Mini ATM \n");
printf("-------------------------- \n");
printf("\n");
printf("Menu \n");
printf("---- \n");
printf("\n");

saldo = 300000;
saldo = saldoA;
printf("1. Cek Saldo   \n");
printf("2. Transfer    \n");
printf("3. Tarik Tunai \n");
printf("\n");
printf("\n");
printf("0. Batal	   \n");
printf("\n");
printf("Silakan pilih : ");
scanf("%d",&pilihan);
system("cls");

switch (pilihan){ //Program Menu Pilihan
	Mula: main();
        case 1 :         	
        	printf("--------- \n");
        	printf("Cek Saldo \n");
        	printf("--------- \n"); 
            printf("\n");
            saldo = 3000000;                
            printf("Sisa Saldo Anda Adalah 		 : Rp. %d\n",saldo); 
			printf("\n");              
            printf("Kembali Ke Menu Utama? (1/2)     : "); scanf("%d",&pilih);
                switch (pilih){
        			case 1 :
        			    system("cls");
        			    goto Mula;
        			break;
					default :
						system("cls");
					printf("            Terima Kasih Sudah Percaya Dengan Kami            \n");
					printf("            Jangan Lupa Ambil Kembali Kartu ATM Anda          \n");
					printf("       dan Pastikan tidak ada Barang Anda yang Tertinggal     \n");
						
			}
        break;
		
		case 2 : 			 
			printf("-------- \n");
			printf("Transfer \n");			 
			printf("-------- \n"); 
			printf("\n");				
			printf("Masukkan Nomor Rekening Tujuan : "); scanf("%d", &rek);  
			system("cls");			 
			printf("-------- \n");
			printf("Transfer \n");			 
			printf("-------- \n"); 
			printf("\n");
			printf("Masukkan Nominal Transfer	   : "); scanf("%d", &nom);
			system("cls");
			
			printf("Anda Atas Nama : %s\n",user);
			printf("Nomor Rekening : %d\n",pw);
			printf("\n");
			printf("Anda Akan Menransfer Uang Ke \n");
			printf("No Rekening    : %d\n",rek);
			printf("Jumlah Nominal : %d\n",nom);
			saldo = 3000000;
			saldoA = saldo - nom;
			printf("Lanjutkan? y/n : "); scanf("%s", &select);
			printf("\n");
					
			system("cls");
					
					if (nom<2975000) {
						printf("Transfer Anda Telah Berhasil...  \n");
						printf("Silahkan Ambil Bukti Transaksi   \n");
						printf("\n");
					}
					else if (nom>2975000){
						printf("Maaf Saldo Anda Tidak Cukup Untuk Melakukan Transaksi \n");
						printf("\n");
					}
					else {
						printf("Eror \n");
					}			
					
					printf("\n");              
                printf("Kembali Ke Menu Utama Untuk Transaksi Lainnya? (1/2)     : "); scanf("%d",&pilih);
                switch (pilih){
        			case 1 :
        			    system("cls");
        			    goto Mula;
        			break;
					default :
						system("cls");
					printf("            Terima Kasih Sudah Percaya Dengan Kami            \n");
					printf("            Jangan Lupa Ambil Kembali Kartu ATM Anda          \n");
					printf("       dan Pastikan tidak ada Barang Anda yang Tertinggal     \n");	
			}					
		break;
		case 3 : 			 
			printf("----------- \n"); 
			printf("Tarik Tunai \n");			 
			printf("----------- \n"); 
			printf("\n");
			printf("Masukkan Nominal Tarik Tunai   : "); scanf("%d", &tarik);
			system("cls");
				
			printf("Anda Atas Nama : %s\n",user);
			printf("Nomor Rekening : %d\n",pw);					
			printf("\n");
			printf("Jumlah Tarik Tunai Nominal : %d\n",tarik);
					
			saldo = 3000000;
			saldoA = saldo - tarik;
					
			printf("Lanjutkan? y/n : "); scanf("%s", &select);
			printf("\n");
					
			system("cls");
					
					if (tarik<2975000) {
						printf("Tarik Tunai Sedang Di Proses.... \n");
						printf("Silahkan Ambil Bukti Transaksi   \n");
						printf("\n");
					}
					else if (tarik>2975000){
						printf("Maaf Saldo Anda Tidak Cukup Untuk Melakukan Transaksi \n");
						printf("\n");
					}
					else {
						printf("Eror \n");
					}
					
					printf("\n");              
                printf("Kembali Ke Menu Utama Untuk Transaksi Lainnya? (1/2)     : "); scanf("%d",&pilih);
                switch (pilih){
        			case 1 :
        			    system("cls");
        			    goto Mula;
        			break;
					default :
						system("cls");
					printf("            Terima Kasih Sudah Percaya Dengan Kami            \n");
					printf("            Jangan Lupa Ambil Kembali Kartu ATM Anda          \n");
					printf("       dan Pastikan tidak ada Barang Anda yang Tertinggal     \n");	
			}
		break;
		default :
						system("cls");
					printf("            Terima Kasih Sudah Percaya Dengan Kami            \n");
					printf("            Jangan Lupa Ambil Kembali Kartu ATM Anda          \n");
					printf("       dan Pastikan tidak ada Barang Anda yang Tertinggal     \n");					
					}					
	}


