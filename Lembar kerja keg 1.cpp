#include <stdio.h>

int main()
{
	int pilihan;
	float determinan;
	
	printf("masukkan ordo matrix yang diinginkan (2x2 atau 3x3) : ");
	scanf("%i" , &pilihan);
	if (pilihan==2)
	 {
	 	float index2 [2][2] ;
	 	printf("\nmasukkan angka matrix :\n");
	 	for (int a=0;a<=1;a++)
		 {
			 for (int aa=0;aa<=1;aa++)
			 {
				 printf("masukkan indek [%i] [%i] : ",a,aa );
				 scanf("%f", &index2[a][aa]);
			 }
		 }
		 printf("\nhasil inputan : \n");
		 for (int b=0;b<=1;b++)
		 {
			 for (int bb=0;bb<=1;bb++)
			 {
				 printf("%.1f \t\t",index2[b][bb]);
			 }
			 printf("\n");
		 }
		 determinan=(index2[0][0]*index2[1][1]-index2[1][0]*index2[0][1]);
		 printf("\nNilai determinan yang dihasilkan adalah : %.2f\n", determinan);
	 }
	else if(pilihan==3)
	 {
			float index3 [3][3] ;
	 	printf("\nmasukkan angka matrix :\n");
	 	for (int a=0;a<=2;a++)
		 {
			 for (int aa=0;aa<=2;aa++)
			 {
				 printf("masukkan indek [%i] [%i] : ",a,aa );
				 scanf("%f", &index3[a][aa]);
			 }
		 }
		 printf("\nhasil inputan : \n");
		 for (int b=0;b<=2;b++)
		 {
			 for (int bb=0;bb<=2;bb++)
			 {
				 printf("%.1f \t\t",index3[b][bb]);
			 }
			 printf("\n");
		 }
		 determinan=( index3[0][0]*index3[1][1]*index3[2][2]+
		 index3[0][1]*index3[1][2]*index3[2][0]+
		 index3[0][2]*index3[2][0]*index3[2][1]-
		 index3[0][1]*index3[1][0]*index3[2][2]-
		 index3[0][0]*index3[1][2]*index3[2][1]-
		 index3[0][2]*index3[1][1]*index3[2][0]);
		 printf("\nNilai determinan yang dihasilkan adalah : %.2f\n", determinan); 
	 return 0;
	 }
	
}