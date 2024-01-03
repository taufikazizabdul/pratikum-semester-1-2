#include <stdio.h>
#include <stdlib.h>
// deklarasi dulu fungsi dan prosedur
int konversiJam_ke_Detik(int jam,int menit,int detik);
void konversiDetik_ke_Jam(int detik);
// program
int main()
{
int pil;
int jam,menit,detik;
printf("1. Konversi jam ke detik\n");
printf("2. Konversi detik ke jam\n");
printf("Masukkan pilihan konversi : "); scanf("%d",&pil);
printf("================================\n");
  switch(pil)
  {
case 1:
    printf("Masukkan angka\n");
    printf("Jam : "); scanf("%d",&jam);
    printf("Menit : "); scanf("%d",&menit);
    printf("Detik : "); scanf("%d",&detik);
    printf("Hasil konversi = %d detik\n",konversiJam_ke_Detik(jam,menit,detik));
    break;

case 2:
    printf("Masukkan detik : "); scanf("%d",&detik);
    konversiDetik_ke_Jam(detik);
    break;

  default:
printf("Pilihan tidak tersedia\n");
  break;
  }
return 0;
}
// iko merubah jam ka detik
int konversiJam_ke_Detik(int jam,int menit,int detik)
{
int total;
total = (jam*3600)+(menit*60)+detik;
return total;
}
//iko merubah detik ka jam
void konversiDetik_ke_Jam(int detik)
{
int sisamod,jam,menit;
jam = detik/3600;
sisamod = detik%3600;
menit = sisamod/60;
detik = sisamod%60;
printf("Hasil konversi jam = %d, menit = %d, detik = %d\n",jam,menit,detik);
}