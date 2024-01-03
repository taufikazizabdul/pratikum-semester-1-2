#include <stdio.h>

int main (){
	int hb1,hb2,hb3,hb4,total=0,disk,counter = 0;
	char ulangi = 'y';
 
	do
	{
	printf(" >>> INFOTECH STORE <<< \n" );
	for(int i=0;i<3;i++){
		printf(" Masukkan harga leptop     : ");
		scanf("%i",&hb1);
		printf(" Masukkan harga harddisk   : ");
		scanf("%i",&hb2);
		printf(" Masukkan harga  printer   : ");
		scanf("%i",&hb3);
		printf(" Masukkan harga  flashdisk : ");
		scanf("%i",&hb4);
		total = hb1+hb2+hb3+hb4;
		break;
	}
		if (total>=10000000){
			printf("anda mendapatkan potongan 25 persen\n");
			disk=total*0.05;
			printf("\ntotal harga : %i\n",total);
			printf("diskon : %i\n",disk);
			printf("total bayar anda sebesar : %i\n",(total-disk));
			printf("\n\nselamat berbelanja kembali :v\n");
}
		else if (total>=15000000){
			printf("anda mendapatkan potongan 20 persen\n");
			disk=total*0.07;
			printf("\ntotal harga : %i\n",total);
			printf("diskon : %i\n",disk);
			printf("total bayar anda sebesar : %i\n",(total-disk));
			printf("\n\nselamat berbelanja kembali :v\n");
}
		else if (total>=15000000){
			printf("anda mendapatkan potongan 10 persen\n");
			disk=total*0.10;
			printf("\ntotal harga : %i\n",total);
			printf("diskon : %i\n",disk);
			printf("total bayar anda sebesar : %i\n",(total-disk));
			printf("\n\nselamat berbelanja kembali :v\n");
}
		else {
			printf("tidak ada potongan , terimakasih\n");
			printf("\ntotal bayar anda sebesar : %i\n",total);
			printf("\nselamat berbelanja kembali :v\n");
		}
		
		printf(" Apakah kamu mau berbelanja lagi?\n");
		printf(" Jawab (y/t): ");
		scanf(" %c", &ulangi);
        
		counter++;
    
	} 
	while(ulangi == 'y');
	
	printf("\n\n -----------------------------\n");
    printf("\nselamat berbelanja kembali :v\n");
    return 0;
    

}
		