#include <stdio.h>
#include <conio.h>


int main(){

int n;

printf("Input jumlah data: ");

scanf("%d",&n);

int arr[n];

int min=99999999,maxs=-1, total=0;

int i=0;
do
{
scanf("%d",&arr[i]);

total+=arr[i];

if (maxs<arr[i]) maxs=arr[i];

if (min>arr[i]) min=arr[i];

i++;

}
while(i<n);

printf("Nilai minimal %d\n",min);

printf("Nilai maksimal %d\n", maxs);

printf("Nilai rata rata %f\n",(float)total/n);

getch();

return 0;

}

