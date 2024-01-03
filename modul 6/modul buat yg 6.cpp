#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
FILE *data;
void menu();
void menuLogin();
void registrasi();
void insertRegs(char username[20], char password[20]);
void printList();
void login();
void updatePass();
void hapus();
int main(){
	
	char kode[3], username[20], password[20], passTemp[20], listUsername[20][20], listPassword[20][20], listKode[20][20];
	int menu, i, member = 0, simpanIndex; 
	bool cekSymbol, cekBesar, cekKecil, cekAngka, cekUser;
	
	
	while(0 < 10){
	
		printf("MENU\n1. Register\n2. Login\n3. Tampil Data\n4. EXIT\nPILIH MENU : ");
		scanf("%d", &menu);
		
		
		
		if(menu == 1){
			
			printf("==REGISTRASI DULU BANG JAGO==\n");
		while(0 < 5){
			
			printf("Input Username : ");
			scanf("%s", username);
			
			
			if(strlen(username) > 6){
				
			
			
			 
			cekSymbol = false;
			
			
			for(i = 0; i < strlen(username); i++){
				
				
				if(isalnum(username[i]) == 0){
					
					if(username[i] != '.'){
						cekSymbol = true; 
					}
				}
			}
			
			
			
			if(cekSymbol == true){
				printf("username yang anda masukkan mengandung symbol selain titik\n");
				
				
				continue;
			}
			
			
			cekUser = false;
			
									
			for(i = 0; listUsername[i][i] != '\0'; i++){
				
				if(strcmp(listUsername[i], username) == 0){
					cekUser = true;  
				}
			}
			
			
			if(cekUser == true){
				
				printf("Username yang anda masukkan sudah terdaftar.\n");
				continue;
			}
				
				
				
				break;
			}else{
				
				
				printf("Username yang anda masukkan kurang dari 6 digit\n");
				continue;
			}
		}
			
			   
			while(8 > 7){
				
				printf("Input Password : ");
				scanf("%s", password);
				
				
				if(strlen(password) > 8){
					
					
					cekAngka = false;
					cekBesar = false;
					cekKecil = false;
					cekSymbol = false;
					
					 
					for(i =0; i < strlen(password); i++){
						
						
						if(password[i] >= 48 && password[i] <= 57){
							cekAngka = true;
						}else if(password[i] >= 65 && password[i] <= 90){    
							cekBesar = true;
						}else if(password[i] >= 97 && password[i]<=122){    
							cekKecil = true;
						}else{
							cekSymbol = true;			
						}
					}
					
					
					if(cekAngka == true && cekBesar == true && cekKecil == true && cekSymbol == true){
						
					}else{
						
						printf("Password harus mengandung angka besar & kecil, huruf, dan symbol\n");
						continue;
					}
					
					
					
					strcpy(passTemp, password);
					
					
					if(password == strrev(passTemp)){
						
						
						printf("Password anda palindrome\n");
						continue;
					}
					
					
					break;
				}else{
					
					printf("Password yang anda masukkan kurang dari 8 digit\n");
					continue;
				}
			}

			
			strcpy(listUsername[member], username);
			strcpy(listPassword[member], password);
			
			data = fopen("data Akun.txt","w+");
			//input datanya kedalam file
			fprintf(data,"%s-%s\n", listUsername[member], listPassword[member]);
			fclose(data);


			for(i = 0; i < 3; i++){
				kode[i] = toupper(username[i]);
			}
		 
			kode[3] = '-';
			member += 1;
			
			
			strcpy(listKode[member], kode);
			
			
			printf("Username berhasil didaftarkan \n");
			printf("Username : %s\nPassword : %s\nKode User : %s%04d\n", username, password, kode, member);
			
			
			
		}else if(menu == 2){
			
				 
			while(0<1){
							
				printf("Input Username : ");
				scanf("%s", &username);
				
				
				cekUser = false;
				
				for(i = 0; listUsername[i][i] != '\0'; i++){
					if(strcmp(listUsername[i], username) == 0){
						simpanIndex = i;	
						cekUser = true;		
					}
				}
				
				if(cekUser == false){		
					printf("Username tidak ada\n");
				
					continue;
				}
				
				
				printf("Input Password : ");
				scanf("%s", &password);
				
				
				if(strcmp(listPassword[simpanIndex], password) == 0){

				}else{
					
					printf("Password salah\n");
					continue;
				}
				
				break; 
			}
			
			printf("====SELAMAT DATANG %s====\n", username);
			printf("Username : %s\nKode User : %s%04d\n", username, listKode[simpanIndex+1], simpanIndex+1);
			

		}else if(menu == 3){
			
			printf("===LIST DATA===\n");
			for(i = 0; listUsername[i][i] != '\0'; i++){
				printf("==%d==\n", i+1);						
				printf("Username : %s\n", listUsername[i]);
				printf("Kode User : %s%04d\n", listKode[i+1], i+1);
			}
			
		}else{
			
			return 0;
		}
			
	}
	
	return 0;
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

	while (fscanf(data, "%s %s %s", newusername, passbaru, kode) != EOF)
	{
		if (b == cLogin)
		{
			fprintf(data, "%s %s %s\n", cUser, passbaru, Kode);
		}
		else
		{
			fprintf(data, "%s %s %s\n", cUser, cPass, Kode);
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