#include <stdio.h>
#include <stdlib.h>

int password,saldo,pilihan,pilih,saldoA,no_rek,nominal;
char next,username[20];

void main()
{
	printf("\t\t\t=======ATM BANK INTERNATIONAL=======\n");
	printf("\t\t\t------------------------------------\n");
	printf("silahkan login akun anda terlebih dahulu\n");
	printf("\n");
	printf("username :");
	scanf("%s", &username);
	printf("password :");
	scanf("%d", &password);
	system("cls");

	printf("selamat datang\n");
	printf("-------------------\n");
	printf("\n");
	printf("pilih menu :\n");
	printf("-------------------\n");
	printf("\n");

	saldo = 100000000;
	saldo =saldoA;

	printf("pilih menu :\n");
	printf("1.cek saldo \n");
	printf("2.transfer \n");
	printf("0.exit \n");
	printf("pilih menu :");
	scanf("%d",&pilihan);
	system("cls");

	switch(pilihan){
		mula :main();
    case 1 :
		printf("cek saldo\n");
		printf("---------\n");
		printf("\n");
		saldo = 100000000;
		printf("sisa saldo anda adalah : Rp.%d\n",saldo);
		printf("\n");
		printf("kembali ke menu utaman?");
		scanf("%d",&pilih);
		switch(pilih)
		{
		case 1:
			system("cls");
			goto mula;
			break;
		default:
			system("cls");
			printf("terima kasih telah percaya dengan kami ");
		}
		break;
	case 2 :
	    printf("transfer\n");
		printf("---------\n");
		printf("\n");
		printf("masukkan nomor rekening tujuan :");
		scanf("%d\n",&no_rek);
		printf("\n");
		printf("masukkan nominal transfer      :");
		scanf("%d\n",&nominal);
		system("cls");
		printf("anda atas nama :%s\n",username);
		printf("nomor rekening :%d\n",no_rek);
		printf("jumlah nominal :%d\n",nominal);
		saldo = 100000000;
		saldoA =saldo-nominal;
		printf("lanjutkan y/t :\n");
		scanf("%s\n",&next);
		printf("\n");
		system("cls");
		if(nominal<90000000){
			printf("selamat tranfer anda berhasil \n");
		}
		else if(nominal>90000000)
		{
			printf("maaf saldo anda tidak cukup melakukan transfer\n");
		}
		printf("\n");
		printf("kembali ke menu utaman?");
		scanf("%d",&pilih);
		switch(pilih)
		{
		case 1:
			system("cls");
			goto mula;
			break;
		default:
			system("cls");
			printf("terima kasih telah percaya dengan kami ");
		}
	}

}
