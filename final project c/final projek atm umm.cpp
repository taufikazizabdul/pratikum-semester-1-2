//header
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int pilihan=1, saldo=2000000, tarik, pin,nominal,transfer, isi_pulsa, salah=0;
    printf("|===========================================================|\n");
    printf("|---------------SELAMAT DATANG DI ATM UMM-------------------|\n");
    printf("|-------------------MASUKKAN ATM ANDA-----------------------|\n");
    printf("|------------------INSERT YOUR ATM CARD---------------------|\n");
    printf("|===========================================================|\n");
    getch();


depan:
    system("cls");
    printf("|===========================================================|\n");
    printf("|----------------SELAMAT DATANG DI ATM UMM------------------|\n");
    printf("|===========================================================|\n");
    printf("\nPILIH BAHASA");
    printf("\nCHOOSE LANGUAGE");

    printf("\n\n1. Indonesia");
    printf("\n\n2. English");
    printf("\nmasukkan angka= ");
    scanf("%d", &pilihan);
        if(pilihan==1) 
		    goto indonesia;
        else if(pilihan==2) 
		    goto english;
        else
            goto depan;
indonesia:
    system("cls");
    printf("|===========================================================|\n");
    printf("|----------------SELAMAT DATANG DI ATM UMM------------------|\n");
    printf("|===========================================================|\n");  
pin:
    printf("\n\nMasukkan PIN anda = ");
    scanf("%d", &pin);
    system("cls");
    if(pin==2020)
    {
            printf("Pin Cocok !");
            printf("\nSilahkan dilanjutkan\n"); 
            system("cls");
    }else
	{
            printf("Silahkan masukkan pin yang benar !\n");
            salah+=1;
            if (salah==3) 
			{
              printf ("ATM Diblokir Karena Anda 3x Salah Memasukkan PIN\n\n"); 
				goto end; 
            }
            else 
                goto pin;
    }
menu:
        system("cls");
    printf("|===========================================================|\n");
    printf("|----------------SELAMAT DATANG DI ATM UMM------------------|\n");
    printf("|===========================================================|\n");
    printf("\n\nMenu Utama :");
    printf("\n1. Tarik Tunai");
    printf("\n2. Transfer");
    printf("\n3. Isi pulsa");
    printf("\n4. Cek Saldo");
    printf("\n5. Keluar");
    printf("\n\nMasukan pilihan anda: ");
    scanf("%d", &pilihan);
       
        if (pilihan==1) 
		 goto tarik;
        else if (pilihan==2) 
		 goto transfer;
        else if (pilihan==3) 
		 goto isi_pulsa;
        else if (pilihan==4)
		 goto saldo;
        else if (pilihan==5)
		 goto end;
        else
            printf("Masukan pilihan yang benar");

tarik:
        system("cls");
        printf("Masukkan Nominal Yang Akan Di Tarik = ");
        scanf("%d", &tarik);
        printf("Nominal yang akan anda tarik adalah = %d", tarik);
        printf("\n\nSaldo anda sekarang = %d", saldo=saldo-tarik);
        goto transaksi;

isi_pulsa:
        system("cls");
        printf("Silahkan masukkan nomer HP tujuan anda = ");
        scanf("%d", &isi_pulsa);
        printf("\nMasukkan nominal yang akan anda isi = ");
        scanf("%d", &nominal);
        printf("Apakah anda akan mengisi pulsa sebesar %d ke %d ?", nominal, isi_pulsa);
        printf("\n\n1. Ya  2. Tidak");
        printf("\n\nMasukkan pilihan anda = ");
        scanf("%d", &pilihan);       
        if (pilihan==1)
		{
          printf("\nTransaksi Berhasil");
          printf("\n\nSaldo anda sekarang = %d", saldo=saldo-nominal); 
		}
        else 
          printf("\nTransaksi Dibatalkan");
        goto transaksi;
        
transfer:
        system("cls");
        printf("Silahkan masukkan nomer rekening tujuan anda = ");
        scanf("%d", &transfer);
        printf("Masukkan nominal yang akan anda tranfer = ");
        scanf("%d", &nominal);
        printf("Apakah anda akan mentransfer %d ke %d ?", nominal, transfer);
        printf("\n\n1. Ya  2. Tidak\n\n");
        printf("Masukkan pilihan anda = ");
        scanf("%d", &pilihan);       
        if (pilihan==1)
		{
           printf("\nTransaksi Berhasil");
           printf("\n\nSaldo anda sekarang = %d", saldo=saldo-nominal); 
		}
        else 
 	       printf("\nTransaksi Dibatalkan");


transaksi:
        printf("\nApakah anda ingin transaksi lagi?");
        printf("\n\n1. Ya 2. Tidak = ");
        scanf("%d", &pilihan);
        system("cls");
            if (pilihan==1) 
			  goto pin;
            if (pilihan==2) 
			  goto end;
saldo:
        system ("cls");
        printf("Saldo anda %d\n\n", saldo);
        goto transaksi;
end:
        system ("cls");
        printf("|===================================================|\n");
        printf("|        Terima Kasih atas kunjungan anda           |\n");
		printf("|         Silahkan cek kembali uang anda            |\n");
		printf("|    dan pastikan tidak ada barang yang tertinggal  |\n");
		printf("|===================================================|\n");
        getch();
        goto selesai;
        
english:
        system("cls");
    printf("|===========================================================|\n");
    printf("|-------------------WELCOME  TO  ATM  UMM-------------------|\n");
    printf("|===========================================================|\n");
	 
pin1:
    printf("\n\nInput Your PIN = ");
    scanf("%d", &pin);
    system("cls");
    if(pin==2020) 
	{
       printf("Pin Correct !");
       printf("\nPlease Continue\n"); 
       system("cls");
    }
	else 
	{
       printf("Please Input the PIN Correctly !\n");
       salah+=1;
       if (salah==3) 
	   {
	   	printf("Your ATM is now Blockir\n\n");
	   	goto end;
	   }
	   else 
        goto pin1;
    }
menu1:
    system("cls");
    printf("|===========================================================|\n");
    printf("|-------------------WELCOME  TO  ATM  UMM-------------------|\n");
    printf("|===========================================================|\n");
    printf("\n\n====Home====");
    printf("\n1. Take Money");
    printf("\n2. Transfer");
    printf("\n3. Charging Pulse");
    printf("\n4. Check Balance");
    printf("\n5. Exit");
    printf("\nInput Your Choice: ");
    scanf("%d", &pilihan);
       
        if (pilihan==1) 
		 goto tarik1;
        else if (pilihan==2) 
		 goto transfer1;
        else if (pilihan==3) 
		 goto isi_pulsa1;
        else if (pilihan==4) 
		 goto saldo1;
        else if (pilihan==5)
		 goto end1;
        else
         printf("Input The best choice");

tarik1:
        system("cls");
        printf("Input Your Balance that Will take = ");
        scanf("%d", &tarik);
        printf("Your balance that will take is = %d", tarik);
        printf("\n\nNow, Your Balance is = %d", saldo=saldo-tarik);
        goto transaksi1;

isi_pulsa1:
        system("cls");
        printf("Input Your Number = ");
        scanf("%d", &isi_pulsa);
        printf("\nInput Nominal = ");
        scanf("%d", &nominal);
        printf("Are you sure want to charging %d to %d ?", nominal, isi_pulsa);
        printf("\n\n1. Yes  2. No");
        printf("\n\nInput Your Choice = ");
        scanf("%d", &pilihan);       
        if (pilihan==1)
		{
          printf("\nTransaction Success");
          printf("\n\nYour Balance is = %d", saldo=saldo-nominal); 
		}
        else 
          printf("\nTransaction Aborted");
        goto transaksi1;

transfer1:
        system("cls");
        printf("Input Rekening Number Destination = ");
        scanf("%d", &transfer);
        printf("Input Nominal = ");
        scanf("%d", &nominal);
        printf("Are you sure want to transfer %d ke %d ?", nominal, transfer);
        printf("\n\n1. Yes  2. No\n\n");
        printf("Input Your Choice = ");
        scanf("%d", &pilihan);       
        if (pilihan==1)
		{
          printf("\nTransaction Success");
          printf("\n\nYour Balance is = %d", saldo=saldo-nominal); 
		
		}
        else 
          printf("\nTransaction Aborted");


transaksi1:
        printf("\nDo you want to transaction again ?");
        printf("\n\n1. Yes 2. No = ");
        scanf("%d", &pilihan);
        system("cls");
            if (pilihan==1) 
			goto pin1;
            if (pilihan==2) 
			goto end1;
saldo1:
        system ("cls");
        printf("Your Balance is %d\n\n", saldo);
        goto transaksi1;
end1:
         printf("\n");
        getch();
        printf("\n");
selesai:
        puts("");
 }
