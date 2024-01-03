#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char** argv)
{
	int stop;
	char simpanname[20][20];
	char simpanpass[20][20];
	char simpankode[20][20];
	char name[20];
	char kodelogin[20];
	char passlogin[20];
	char pass[20];
	char kode[20];
	char user[20];
	int i, ulang = 0  , h, j;
	char A[20][20];
	int B = 0;
	int a, b, c;
	int kapital = 0 , karakter = 0 , kecil = 0 , angka = 0 ;
	bool checker, checker1;
	char jawab;
	char passwordterbalik [50];
	do
	{
menu:
		stop == 0;
		printf("\nMENU\n");
		printf("1. Register\n");
		printf("2. Login\n");
		printf("3. Tampilkan Semua Data\n");
		printf("4. Exit\n");
		printf("PILIH MENU :");
		fflush(stdin);
		gets(&jawab);
		switch(jawab)
		{
		case '1':
			//	registrasi();
			do
			{
				checker = 0;
				printf("===REGISTRASI===\n");
				printf("input username : ");
				gets(name);
				for(i = 0; i < strlen(name); i++)
				{
					if(strlen(name) < 6)
					{
						printf("USERNAME HARUS LEBIH DARI 6 KARAKTER\n");
						checker = 1;
						break;
					}
					else if(strlen(name) > 20)
					{
						printf("USERNAME TIDAK BOLEH LEBIH DARI 20 KARAKTER\n");
						checker = 1;
						break;
					}
					if((name[i] >= 32) && (name[i] <= 126)) //semua kode ASCII
					{
						if(name[i] == 46) //kecuali tanda "."
						{
							continue;
						}
						if((name[i] >= 48) && (name[i] <= 57)) //kecuali 0 - 9
						{
							continue;
						}
						if((name[i] >= 65) && (name[i] <= 90)) //kecuali A - Z
						{
							continue;
						}
						if((name[i] >= 97) && (name[i] <= 122)) //kecuali a -z
						{
							continue;
						}
						printf("ERROR : USER NAME TIDAK BOLEH ADA SPECIAL KARAKTER\n");
						checker = 1;
						break;
					}
				}
			}
			while(checker);
			do
			{
password:
				checker = 0;
				printf("input password : ");
				gets(pass);
				//	for(i = 0; i <strlen(pass); i++){
				do
				{
					if(strlen(pass) < 8)
					{
						printf("PASSWORD HARUS LEBIH DARI 8 KARAKTER\n");
						goto password;
						break;
					}
					strcpy(passwordterbalik, pass);
					strrev(passwordterbalik);
					if (strcmp(pass, passwordterbalik) == 0)
					{
						printf("\nPassword Tidak Boleh Palindrome\n");
						checker = 1;
						break;

					}
					for(i = 0; i < strlen(pass); i++)
					{
						if(pass[i] >= 65 && pass[i] <= 90)
						{
							kapital = 1;
							//	checker =0;
						}
						if(pass[i] >= 97 && pass[i] <= 122)
						{
							kecil = 1;
							//	checker =0;
						}
						if(pass[i] >= 48 && pass[i] <= 57)
						{
							angka = 1;
							//	checker =0;
						}

						if(pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%' || pass[i] == '^' || pass[i] == '&' ||
								pass[i] == '*' || pass[i] == '(' || pass[i] == ')' || pass[i] == '_' || pass[i] == '+' || pass[i] == '-' || pass[i] == '=' || pass[i] == '|' ||
								pass[i] == '/' || pass[i] == '[' || pass[i] == ']' || pass[i] == '{' || pass[i] == '}' || pass[i] == ':' || pass[i] == '"' || pass[i] == ';' ||
								pass[i] == '`' || pass[i] == '<' || pass[i] == '>' || pass[i] == ',' || pass[i] == '.' || pass[i] == '~' || pass[i] == '?')
						{
							karakter = 1;
							//	checker = 0;
						}
						checker = 0;
						//	break;
					}
					if(kapital == 0)
					{
						printf("MINIMAL SATU HURUF KAPITAL\n");
						checker = 1;
						break;
					}
					if(kecil == 0)
					{
						printf("MINIMAL SATU HURUF KECIL\n");
						checker = 1;
						break;
					}
					if(angka == 0)
					{
						printf("MINIMAL SATU ANGKA\n");
						checker = 1;
						break;
					}
					if(karakter == 0)
					{
						printf("MINIMAL SATU SPESIAL KARAKTER\n");
						checker = 1;
						break;
					}
					else
					{
						checker = 0;
						break;
					}
				}
				while(checker == 1);

			}
			while(checker);
			printf("\nUsername BERHASIL  Di DAFTARKAN\n");
			printf("username: %s\n", name);
			printf("password : %s\n", pass);
			for (i = 0; i <= 2; i++)
			{
				kode[i] = name[i];
			}
			kode[i] = '\0';
			for (i = 0; kode[i] != NULL; i++)
			{
				if	(kode[i] >= 'a' && kode[i] <= 'z')
				{
					kode[i] = kode[i] - 32;
				}
			}
			printf("kodeuser : %s-", kode);
			sprintf(A[B], "%04d\n", B + 1);
			printf("%s", A);

			strcpy(simpankode[B], kode);
			strcpy(simpanname[B], name);
			strcpy(simpanpass[B], pass);
			B++;
			goto menu;
		case '2':
			//	login();
			for( ulang = 0; ulang <= 4; ulang++)
			{
				printf(" \n==LOGIN==\n");
				printf("\ninput username :");
				scanf("%s", &kodelogin);
				printf("\ninput password : ");
				scanf("%s", &passlogin);
				if ((strcmp(kodelogin, simpanname) == 0) && (strcmp(passlogin, simpanpass) == 0))
				{
					break;
				}
				else
				{
					printf("Maaf password atau username anda salah\n");
					ulang = ulang + 1;
				}
			}
			if(ulang <= 4)
			{
				printf("\nAnda telah berhasil login.");
				printf("\nSELAMAT DATANG %s", simpanname);
				printf("\n==Data Anda==");
				printf("\nusername : %s", simpanname);
				printf("\nkodeuser : %s", simpankode);
			}
			else
			{
				printf("Sudah melebihi batas login, tidak bisa login lagi");
			}
			goto menu;
		case '3':
			printf("==LIST DATA==");

			for(b = 0; b <= 20; b++)
			{

				printf("\n==%d==", b);
				printf("\nusername : %s", simpanname);
				printf("\nkode user : %s", simpankode);
				b++;

			}


			goto menu;
		case '4':
			stop == 1;
			printf("SILAHKAN ANDA KELUAR DARI PROGRAM");
			break;
		default:
			printf("wrong answer\n");
		}
	}
	while(stop);

}







