#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(){
    int umur,tgl,jmlhanak,jmlhistri,bonus_lembur,lembur,gaji=180000,tunjangan,tunjangan1,tunjangan2,total_gaji_1tahun,total_gaji_1bulan;
	char nama,jeniskelamin,pendidikan,alamat,ulang ='y';

    do{
        printf("masukkan nama karyawan :");
	    scanf("%[^\n]s",&nama);
	    printf("masukkan jenis kelamin :");
	    scanf("%s",&jeniskelamin);
	    printf("masukkan umur karyawan :");
	    scanf("%d",&umur);
	    printf("masukkan pendidikan terakhir :");
	    scanf("%s",&pendidikan);
	    printf("masukkan tanggal lahir :");
	    scanf("%d",&tgl);
	    printf("masukkan alamat :");
	    scanf("%s",&alamat);
	    printf("masukkan jumlah anak :");
	    scanf("%d",&jmlhanak);
	    printf("masukkan jumlah istri :");
	    scanf("%d",&jmlhistri);
	    printf("masukkan lama lembur :");
	    scanf("%d",&lembur);
        
            if(umur <= 25 ){
            	gaji =1800000;
            	printf("gaji pokok yang didapat adalah :%d\n",gaji);
                printf("menjabat sebagai junior office\n");
            }else if(umur > 25 )
			{
				gaji = 2500000;
				printf("gaji popok yang didapat adalah :%d\n",gaji);
                printf("menjabat sebagai senior office\n");
			}
			
			if(jmlhanak > 5)
			{
				tunjangan1 = 5 * 200000;
				printf("tunjangan uang untuk anak sebesar :%d\n", tunjangan1);
				
			}else if(jmlhanak >= 1 && jmlhanak <= 5)
			{
				tunjangan1 =jmlhanak * 200000;
				printf("tunjangan uang untuk anak sebesar:%d\n", tunjangan1);
			}else if(jmlhanak > 1 )
			{
				tunjangan1 = 0;
				printf("tunjangan uang untuk anak sebesar:%d\n", tunjangan1);
			}
			
			if (jmlhistri >= 1)
			{
				tunjangan2 = jmlhistri * 500000;
			    printf("tunjangan uang untuk istri sebesar:%d\n", tunjangan2);
			}else if (jmlhistri < 1)
			{
				tunjangan2 = 0;
				printf("tunjangan uang untuk istri sebesar:%d\n", tunjangan2);
			}
			if (lembur > 50)
			{
				bonus_lembur = 50 * 50000;
				printf("total uang lembur yang didapat sebesar:%d\n", bonus_lembur);
			}else if (lembur >=  1 && lembur <= 50)
			{
				bonus_lembur = lembur * 50000;
				printf("total uang lembur yang didapat sebesar:%d\n", bonus_lembur);
			}else if(lembur < 1)
			{
				bonus_lembur = 0;
				printf("total uang lembur yang didapat sebesar:%d\n", bonus_lembur);
			}
			tunjangan = tunjangan1 + tunjangan2;
			total_gaji_1tahun = total_gaji_1bulan * 12;
			printf("total tunjangan yang diperoleh sebesar:%d\n", tunjangan);
			printf("total gaji 1 bulan sebesar:%d\n", total_gaji_1bulan);
			printf("total gaji 1 tahun sebesar:%d\n", total_gaji_1tahun);
			
        printf("ingin mengulang? [y/t]");
        ulang=getch();
        system("cls");
    }while(ulang=='y');
        return(0);
}