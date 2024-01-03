#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char cUser[50], cPass[50], cKode[50];

void menu();
void registrasi();
void insertRegs(char user[50], char pass[50]);
void printList();
void login();
char *subString(char *someString, int n) 
{
   char *new = malloc(sizeof(char)*n+1);
   strncpy(new, someString, n);
   new[n] = '\0';
   return new;
}

FILE *fp;

int main(int argc, char** argv)
{
	menu();
	return 0;
}

void menu(){
	int pilih;
	printf("Menu\n1. Registrasi\n2. Login\n3. Tampilkan semua data\n4. EXIT\nPILIH MENU : ");
	scanf("%d", &pilih);

	switch(pilih){
	case 1:
		registrasi();
		break;
	case 2:
		login();
		break;
	case 3:
		printList();
		break;
	case 4:
		exit(1);
		break;
	default:
		printf("Menu tidak tersedia!!\n\n");
		break;
	}
}

void registrasi(){
	char user[50], pass[50];
	
	printf("Input Username : ");
	scanf("%s", user);
	printf("Input Password : ");
	scanf("%s", pass);

	if(strlen(user)<6){
		printf("username harus lebih dari 6 karakter\n\n");
		return menu();
	}else{
		//Ngecek jika input username ada karakter spesial atau tidak
		int i = 0, spesial=0;
		while(user[i]!='\0'){
			if(!isalpha(user[i]) && !isdigit(user[i]) && user[i]!='.'){
				spesial++;
			}
			i++;
		}
		if(spesial>=1){
			printf("Username tidak boleh menggunakan karakter spesial!\n\n");
			return menu();
		}
	}
	
	if(strlen(pass)<8){
		printf("password harus lebih dari 8 karakter\n\n");
		return menu();
	}else{
		//Ngecek agar syarat semua terpenuhi
		//Jika tidak terpenuhi, variabel tetap bernilai 0
		//Untuk memenuhi nilai syarat, maka variabel small, caps,spec,dan num harus bernilai lebih dari 1
		int i = 0, small = 0, caps = 0, spec = 0, num = 0;
		while(pass[i]!='\0'){
			if(pass[i]>='0' && pass[i]<='9')
				num++;	
			else if(pass[i]>='A' && pass[i]<='Z')
				caps++;
			else if(pass[i]>='a' && pass[i]<='z')
				small++;
			else
				spec++;
			i++;
		}
		if(small == 0 || caps == 0 || spec == 0 || num == 0){
			printf("Password harus terdiri minimal 1 huruf kecil, 1 huruf kapital, 1 angka, dan 1 karakter spesial!\n\n");
			return menu();
		}else{
			//Ngecek palindrome. cek google buat definisi palindrome
			char rev[50];
			strcpy(rev, pass);
			strrev(rev);
			if(strcmp(pass, rev)==0){
				printf("password tidak boleh palindrome!\n\n");
				return menu();
			}
		}
	}
	insertRegs(user, pass);
	menu();
}

void insertRegs(char user[50], char pass[50]){
	int j = 1;
	fp = fopen("register.txt", "a+");
	
	//Perulangan ini digunakan untuk cek duplikat username
	while(fscanf(fp, "%s %s %s", cUser, cPass, cKode)!=EOF){
		if(strcmp(cUser, user)==0){
			printf("User tidak bisa digunakan!!\n\n");
			menu();
		}
		j++;
	}
	
	//Ini digunakan untuk mengambil 3 karakter pertama dari user
	//Dan merubahnya menjadi huruf kapital
	char b[50];
	strcpy(b, subString(user, 3));
	strupr(b);
	
	//Ini digunakan untuk urutan kode user
	char c[50];
	sprintf(c, "%d", j);
	strrev(c);
	while(strlen(c)<4){
		strcat(c, "0");
	}
	strrev(c);
	strcat(b, "-");
	strcat(b, c);
	
	//Ini digunakan untuk mennyimpan data registrasi ke file register.txt
	fprintf(fp, "%s %s %s\n", user, pass, b);
	
	printf("Username berhasil dibuat");
	printf("\n Username : %s\n Password : %s\n Kode User : %s\n\n", user, pass, b);
	fclose(fp);
}

void login(){
	char user[50], pass[50];
	int f1=0;
	printf("Masukkan username : ");
	scanf("%s",user);
	printf("Masukkan pass : ");
	scanf("%s",pass);
	
	fp = fopen("register.txt", "r");
	
	//Ini digunakan untuk menyimpan data sementara dari
	//file, data yang diambil ada user, pass dan kode
	while(fscanf(fp, "%s %s %s", cUser, cPass, cKode)!=EOF)
	{
		if ((strcmp(cKode, user)==0||strcmp(cUser, user)==0) && strcmp(cPass, pass)==0){
			f1=1;
			break;
		}
	}
	fclose(fp);

	//Data sementara yang disimpan tadi dipakai buat menampilkan kode dibawah
	if(f1==1){
		printf("Selamat datang %s\n", cUser);
		printf("=== Data anda ===\n");
		printf("Username : %s\n", cUser);
		printf("Kode User : %s\n\n", cKode);
		menu();
	}else{
		printf("User atau Password anda salah!\n\n");
		menu();
	}
}

void printList() {
	int b = 1;
	fp = fopen("register.txt", "r");
	printf("=== LIST DATA ===\n");
	while(fscanf(fp, "%s %s %s", cUser, cPass, cKode)!=EOF){
		printf("=== %d ===\nUsername : %s\nKode User : %s\n", b, cUser, cKode);
		b++;
	}
	printf("\n");
	fclose(fp);
	menu();
}