#include <stdio.h>
#include <string.h>
void login ();
void daftar ();

char username[20][20],pass[20][20],inputusername[20],inputpass[20];
int jumlahAkun = 0;
 int main(int argc, char** argv)
 {
	 bool quit = false;
	 int pilihan;
	 while(!quit)
	 {
	 	printf("MENU\n 1.Daftar\n 2.login\n 3. Exit\n pilih menu :");
	 	scanf("%d",&pilihan);
	 	switch(pilihan)
		 {
		 case 1 : daftar(); break;
		 case 2 : login(); break;
		 case 3 : quit = true; 
			 break;
		 default: printf("erroe :INPUTAN SALAH");
			 break;
		 }
		
	 }
	 
	 return 0;
 }
void login(){
	char input;
	bool akunditemukan = false;
	if(jumlahAkun > 0)
	{
		printf("==login==\nusername");
		gets(inputusername);
		printf("password :");
		gets(inputpass);
		for (int i=0;i<5;i++)
		{
			if(strcmp(inputusername,username[i])== 0 && strcmp(inputpass ,pass[i]) == 0)
			{
				printf("selamat datang %s",username[i]);
				printf("ganti password (y/t)?");
				scanf("%c",&inputusername);
				akunditemukan = true;
				if(input == 'y')
				{
					printf("password baru :");
					gets( pass[i]);
					printf("password berasil diubah \n");
				}
				
			}
		}
	}else
	{
		printf("erroe : SILAHKAN DAFTAR TEREBIH DAHULU \n");
	}
}