#include <stdio.h>
#include <conio.h>
 
 
int main(){
	
float phi=3.14; //constanta phi
int r, luas,keliling,pilihan;  //variabel yang dipakai
int hasil;
//input data
printf("====== Program Menhitung Luas dan Keliling Lingkaran======\n");
printf("=========================================================\n");
printf("Masukan Jari-jari lingkaran  : ");
scanf("%d",&r);  //menyimpan inputan ke variabel r
 
//proses
/*luas      = phi*r*r;  //perhitungan luas
keliling  = 2*(phi*r); //perhitungan keliling*/
 
//output data
printf(" \n1.luas lingkaran");
printf(" \n2.keliling lingkaran ");
	
printf("\nPilih Menu :");
scanf("%d",&pilihan);
if(pilihan==1)
	{
		luas      = phi*r*r;
	 printf("\nLuas Lingkaran adalah   : %d\n",hasil);
	}	
	
	else if(pilihan==2)
	{
		keliling  = 2*(phi*r);
	 printf("\nKeliling Lingkaran adalah : %d\n",hasil);
	}
		

	getch();
return 0;
}