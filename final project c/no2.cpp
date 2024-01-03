#include <stdio.h>
#include <conio.h>

 
int main() 
{
int detik,i,jml[2],waktu[2]={3600,60};
printf("\n|============================================|");
printf("\n|       MENKONVERSIKAN JAM-MENIT-DETIK       |");
printf("\n|============================================|");
printf("\n");
printf("Masukan jumlah detik yang mau dihitung : ");
scanf("%d",&detik);
printf("\n===============================================");
printf("\n maka waktunya adalah :  ");
for(i=0;i<=1;i++)
{
jml[i]=detik/ waktu[i];
detik= detik-(waktu[i]*jml[i]);
}
	
printf("\n Jam   : %d  \n Menit : %d \n Detik : %d ",jml[0],jml[1],detik);
 
getch();

return 0;
}