#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char cUser[20], cPass[20], cKode[20];
int cLogin = 1;

void menu();void menuLogin();void registrasi();void login();
void insertRegs(char user[20], char pass[20]);
void printList();
void gantiPass();
void hapusAkun();
char *subString(char *someString, int n) 
{
   char *new = malloc(sizeof(char)*n+1);
   strncpy(new, someString, n);
   new[n] = '\0';
   return new;
}

FILE *fp, *fp1;

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

void menuLogin()
{
	int pilih;
	printf("OPSI LAIN\n1. Ganti password\n2. Hapus akun\n3. Kembali ke menu utama\nPilih Menu : ");
	scanf("%d", &pilih);

	switch(pilih){
	case 1:
		gantiPass();
		break;
	case 2:
		hapusAkun();
		break;
	default:cLogin = 1;
		printf("\n");
		menu();break;
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
	}
	//special karakter
	else{
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
		//Ngecek syarat
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
			//Ngecek palindrome
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

void insertRegs(char user[20], char pass[20]){
	int j = 1;
	fp = fopen("data_register.txt", "a+");
	
	//cek duplikat username
	while(fscanf(fp, "%s %s %s", cUser, cPass, cKode)!=EOF){
		if(strcmp(cUser, user)==0){
			printf("User tidak bisa digunakan!!\n\n");
			menu();
		}
		j++;
	}
	
	//3 karakter kapital
	char b[50];
	strcpy(b, subString(user, 3));
	strupr(b);
	
	//urutan kode user
	char c[50];
	sprintf(c, "%d", j);
	strrev(c);
	while(strlen(c)<4){
		strcat(c, "0");
	}
	strrev(c);
	strcat(b, "-");
	strcat(b, c);
	
	//menyimpan data registrasi ke file data_register.txt
	fprintf(fp, "%s %s %s\n", user, pass, b);
	
	printf("Username berhasil dibuat");
	printf("\n Username : %s\n Password : %s\n Kode User : %s\n\n", user, pass, b);
	fclose(fp);
}

void login(){
	char user[20], pass[20];
	int f1=0;
	printf("Masukkan username : ");
	scanf("%s",user);
	printf("Masukkan pass : ");
	scanf("%s",pass);
	
	fp = fopen("data_register.txt", "r");
	
	//data user,pass,kode
	while(fscanf(fp, "%s %s %s", cUser, cPass, cKode)!=EOF)
	{
		if ((strcmp(cKode, user)==0||strcmp(cUser, user)==0) && strcmp(cPass, pass)==0){
			f1=1;
			break;
		}
	}
	fclose(fp);

	//Data buat menampilkan kode dibawah
	if(f1==1){
		printf("Selamat datang %s\n", cUser);
		printf("=== Data anda ===\n");
		printf("Username : %s\n", cUser);
		printf("Kode User : %s\n\n", cKode);
		menuLogin();
	}else{
		printf("User atau Password anda salah!\n\n");
		menu();
	}
}

void printList() {
	int b = 1;
	fp = fopen("data_register.txt", "r");
	printf("=== LIST DATA ===\n");
	while(fscanf(fp, "%s %s %s", cUser, cPass, cKode)!=EOF){
		printf("=== %d ===\nUsername : %s\nKode User : %s\n", b, cUser, cKode);
		b++;
	}
	printf("\n");
	fclose(fp);
	menu();
}
void gantiPass()
{
	char newPass[20];
	int b = 1;
	printf("===Ganti Password===\nMasukkan password baru : ");
	scanf("%s", newPass);
	if (strlen(newPass) < 8)
	{
		printf("===Password harus lebih dari 8 karakter===\n\n");
		return menuLogin();
	}
	else
	{
		int i = 0, small = 0, caps = 0, spec = 0, num = 0;
		while (newPass[i] != '\0')
		{
			if (newPass[i] >= '0' && newPass[i] <= '9')
				num++;
			else if (newPass[i] >= 'A' && newPass[i] <= 'Z')
				caps++;
			else if (newPass[i] >= 'a' && newPass[i] <= 'z')
				small++;
			else
				spec++;
			i++;
		}
		if (small == 0 || caps == 0 || spec == 0 || num == 0)
		{
			printf("===Password harus terdiri dari 1 huruf kecil, 1 huruf kapital, 1 angka, dan 1 karakter spesial===\n\n");
			return menuLogin();
		}
		else
		{
			char rev[20];
			strcpy(rev, newPass);
			strrev(rev);
			if (strcmp(newPass, rev) == 0)
			{
				printf("===Password tidak boleh palindrome===\n\n");
				return menuLogin();
			}
		}
	}
	fp = fopen("data_register.txt", "r");
	fp1 = fopen("tmpreg.txt", "a+");
	while (fscanf(fp, "%s %s %s", cUser, cPass, cKode) != EOF)
	{
		if (b == cLogin)
		{
			fprintf(fp1, "%s %s %s\n", cUser, newPass, cKode);
		}
		else
		{
			fprintf(fp1, "%s %s %s\n", cUser, cPass, cKode);
		}
		b++;
	}
	fclose(fp);
	fclose(fp1); 
	remove("data_register.txt");
	rename("tmpreg.txt", "data_register.txt");
	printf("\n===Password telah diubah===\n\n");
	cLogin = 1;
	menu();
}

void hapusAkun()
{
	int b = 1;
	fp = fopen("data_register.txt", "r");
	fp1 = fopen("tmpreg.txt", "a+");
	while (fscanf(fp, "%s %s %s", cUser, cPass, cKode) != EOF)
	{
		if (b != cLogin)
		{
			fprintf(fp1, "%s %s %s\n", cUser, cPass, cKode);
		}
		b++;
	}
	fclose(fp);
	fclose(fp1);
	remove("data_register.txt");
	rename("tmpreg.txt", "data_register.txt");
	printf("\n===Akun telah dihapus===\n\n");
	cLogin = 1;
	menu();
}
