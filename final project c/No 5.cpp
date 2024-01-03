#include <stdio.h>
#include <conio.h>
int main ()
{
 float bil1,bil2;
 float bagi;

  printf ("Masukan Bilangan 1 :");
  scanf ("%d",&bil1);
  
  printf ("\n Masukan Bilangan 2 :");
  scanf ("%d",&bil2);

 if (bil2==0 && bil1 == 0)
  printf("Division By Zero");
 
 else if (bil2 ==0){
  printf ("tak hingga"); 
 } 

 else
  printf ("Hasil Bagi dari 2 bilangan tersebut = %.3f",bil1/bil2);

 getch();
}