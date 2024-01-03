#include <stdio.h>

int main()
{
	float c[2][2],d[3][3],det;
	int ordo,i,j;
	
	
	printf("masukkan ordo matriks yang diinginkan(2x2 atau 3x3): ");
	scanf("%i",&ordo);
	
	printf("masukkan angka angka matriks :\n");
	
	switch (ordo){
		case 2 :
			for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				printf("masukkan index baris [%i][%i]:",i,j);
				scanf("%f",&c[i][j]);
			} 
		}
		printf("\nhasil inputan :\n");
		for(i=0; i<2; i++){
			for(j=0; j<2; j++)
				printf("%0.1f\t",c[i][j]);
			printf("\n");
		}
		det=c[0][0]*c[1][1]-c[0][1]*c[1][0];
		printf("Nilai diterminan yang dihasilkan adalah : %0.2f\n",det);
		break;
	
		
		case 3 :
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("masukkan index baris [%i][%i]:",i,j);
				scanf("%f",&d[i][j]);
			} 
		}
		printf("\nhasil inputan :\n");
		for(i=0; i<3; i++){
			for(j=0; j<3; j++)
				printf("%0.1f\t",d[i][j]);
			printf("\n");
		}
		det=((d[0][0]*d[1][1]*d[2][2])+(d[0][1]*d[1][2]*d[2][0])+(d[0][2]*d[1][0]*d[2][1]))-((d[2][0]*d[1][1]*d[0][2])+(d[2][1]*d[1][2]*d[0][0])+(d[2][2]*d[1][0]*d[0][1]));
		printf("Nilai diterminan yang dihasilkan adalah : %0.2f\n",det);
		break;
		
		default :
			puts("Operator tidak dikenali.");
	}
	return 0;
}