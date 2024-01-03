#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char cUser[50], cPass[50], cKode[50];
int cLogin = 1;

void menu();
void menuLogin();
void registrasi();
void insertRegs(char user[50], char pass[50]);
void printList();
void login();
void updatePass();
void hapus();
char *subString(char *someString, int n) 
{
   char *new = malloc(sizeof(char)*n+1);
   strncpy(new, someString, n);
   new[n] = '\0';
   return new;
}

FILE *data,*data;

int main(int argc, char** argv)
{
	menu();
	return 0;
}

void menu(){
	int pilih;
	printf("Menu\n1. Registrasi\n2. Login\n3. Tampilkan data\n4. EXIT\nPILIH MENU : ");
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
	printf("1. Ganti password\n2. Hapus akun\n3. Kembali ke menu utama\nPilih menu : ");
	scanf("%d", &pilih);
	
	switch (pilih){
		case 1:
			updatePass();
			break;
		case 2:
			delete();
			break;
		default:
			cLogin = 1;
			printf("\n");
			menu();
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
	}
	else
	{
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
	}
	else
	{
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
		}
		else
		{
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
	data = fopen("phionix.txt", "w+"); 
	
	while(fscanf(data, "%s %s %s", cUser, cPass, cKode)!=EOF){
		if(strcmp(cUser, user)==0){
			printf("User tidak bisa digunakan!!\n\n");
			menu();
		}
		j++;
	}
	

	char b[50];
	strcpy(b, subString(user, 3));
	strupr(b);
	
	char c[50];
	sprintf(c, "%d", j);
	strrev(c);
	while(strlen(c)<4){
		strcat(c, "0");
	}
	strrev(c);
	strcat(b, "-");
	strcat(b, c);
	
	fprintf(data, "%s %s %s\n", user, pass, b);
	
	printf("Username berhasil dibuat");
	printf("\n Username : %s\n Password : %s\n Kode User : %s\n\n", user, pass, b);
	fclose(data);
}

void login(){
	char user[50], pass[50];
	int f1=0;
	printf("Masukkan username : ");
	scanf("%s",user);
	printf("Masukkan password : ");
	scanf("%s",pass);
	
	data= fopen("phionix.txt", "r");
	while(fscanf(data, "%s %s %s", cUser, cPass, cKode)!=EOF)
	{
		if ((strcmp(cKode, user)==0||strcmp(cUser, user)==0) && strcmp(cPass, pass)==0){
			f1=1;
			break;
		}
		cLogin++;
	}
	fclose(data);

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
	data = fopen("phionix.txt", "r");
	printf("=== LIST DATA ===\n");
	while(fscanf(data, "%s %s %s", cUser, cPass, cKode)!=EOF){
		printf("=== %d ===\nUsername : %s\nKode User : %s\n", b, cUser, cKode);
		b++;
	}
	printf("\n");
	fclose(data);
	menu();
}

void updatePass()
{
	char passbaru[50];
	int b = 1;
	printf("=== Change password ===\nMasukan password baru : ");
	scanf("%s", passbaru);
	
    if (strlen(passbaru) < 8)
	{
		printf("password harus lebih dari 8 karakter\n\n");
		return menuLogin();
	}
	else
	{
		int i = 0, small = 0, caps = 0, spec = 0, num = 0;
		while (passbaru[i] != '\0')
		{
			if (passbaru[i] >= '0' && passbaru[i] <= '9')
				num++;
			else if (passbaru[i] >= 'A' && passbaru[i] <= 'Z')
				caps++;
			else if (passbaru[i] >= 'a' && passbaru[i] <= 'z')
				small++;
			else
				spec++;
			i++;
		}
		if (small == 0 || caps == 0 || spec == 0 || num == 0)
		{
			printf("Password harus terdiri minimal 1 huruf kecil, 1 huruf kapital, 1 angka, dan 1 karakter spesial!\n\n");
			return menuLogin();
		}
		else
		{
			char rev[50];
			strcpy(rev, passbaru);
			strrev(rev);
			if (strcmp(passbaru, rev) == 0)
			{
				printf("password tidak boleh palindrome!\n\n");
				return menuLogin();
			}
		}
	}

	data = fopen("phionix.txt", "r");
	data = fopen("bangbang.txt", "a+");

	while (fscanf(data, "%s %s %s", cUser, cPass, cKode) != EOF)
	{
		if (b == cLogin)
		{
			fprintf(data, "%s %s %s\n", cUser, passbaru, cKode);
		}
		else
		{
			fprintf(data, "%s %s %s\n", cUser, cPass, cKode);
		}
		b++;
	}
	remove("phionix.txt");
	rename("bangbang.txt", "phionix.txt");
	fclose(data);
	fclose(data);

	printf("\n=== Password berhasil diubah!! ===\n\n");
	cLogin = 1;
	menu();
}

void delete()
{
	int b = 1;

	data = fopen("phionix.txt", "r");
	data = fopen("bangbang.txt", "a+");

	while (fscanf(data, "%s %s %s", cUser, cPass, cKode) != EOF)
	{
		if (b != cLogin)
		{
			fprintf(data, "%s %s %s\n", cUser, cPass, cKode);
		}
		b++;
	}
	remove("phionix.txt");
	rename("bangbang.txt", "phionix.txt");
	fclose(data);
	fclose(data);

	printf("\n=== Akun berhasil dihapus!! ===\n\n");
	cLogin = 1;
	menu();
}