#include <stdio.h>

int main(){
	int hb1,total=0,stat=1,disk;
	char ulangi ='y';
	
	printf("<<<INFOTECH STORE>>>\n");
	for(int i=0;i<3;i++){
	printf("masukkan harga barang %i: ",stat);
	scanf("%i",&hb1);
	total = total+hb1;
	stat++;}
	if (total>=500000){
		printf("anda mendapatkan potongan 25 persen\n");
		disk=total*0.25;
		printf("\ntotal harga : %i\n",total);
		printf("diskon : %i\n",disk);
		printf("total bayar anda sebesar : %i\n",(total-disk));
		printf("\n\nselamat berbelanja kembali :v\n");
	}else if (total>=300000){
		printf("anda mendapatkan potongan 20 persen\n");
		disk=total*0.20;
		printf("\ntotal harga : %i\n",total);
		printf("diskon : %i\n",disk);
		printf("total bayar anda sebesar : %i\n",(total-disk));
		printf("\n\nselamat berbelanja kembali :v\n");
	}else if (total>=100000){
		printf("anda mendapatkan potongan 10 persen\n");
		disk=total*0.10;
		printf("\ntotal harga : %i\n",total);
		printf("diskon : %i\n",disk);
		printf("total bayar anda sebesar : %i\n",(total-disk));
		printf("\n\nselamat berbelanja kembali :v\n");
	}else {
		printf("tidak ada potongan , terimakasih\n");
		printf("\ntotal bayar anda sebesar : %i\n",total);
		printf("\nselamat berbelanja kembali :v\n");
		
		printf(" Apakah kamu mau berbelanja lagi?\n");
		printf(" Jawab (y/t): ");
		scanf(" %c", &ulangi);
        
        
	}
	while(ulangi =='y');
	
        printf("\n\n -----------------------------\n");
        printf("\nselamat berbelanja kembali :v\n");
	

	return 0;
}