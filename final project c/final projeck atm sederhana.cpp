#include <iostream>
#include <cstdlib>

using namespace std;

void header(){
    cout << "================================================\n"
         << " \t       ATM BANK RAKYAT \n"
         << " \t       Pecahan 50.000\n"
         << "================================================\n";
}

void penutup(){
    cout << "================================================\n"
         << "       Terima Kasih atas kunjungan anda\n"
         << "\tSilahkan cek kembali uang anda\n"
         << "dan pastikan tidak ada barang yang tertinggal\n"
         << "================================================\n";
}

class pin {
private :
    int kode_pin(){
        return 123456;
    }
public :
    int config_pin(){
        return kode_pin();
    }
    char* nama(){
        return (char*) "orang kaya :v";
    }
};

int main(){

    int saldo_awal = 300000 , pin_input , tarik  , setor , kode ;
    pin kode_pin;

    header();  //untuk menampilkan judul yg diatas tadi

    cout << "Silahkan masukkan pin anda : ";cin >> pin_input;
    menu :
    if (pin_input==kode_pin.config_pin()){
        cout << "\nSelamat Datang , "
             << kode_pin.nama() << "\n\n";
        cout << "Pilihan Menu :\n";
        cout << "1. Tarik Tunai \n2. Setor Tunai \n3. Cek Saldo\n4. Keluar :v\n\n";
        cout << "Masukkan kode menu : " ; cin >> kode ;
        switch(kode){
        case 1 :
            tarik :
            cout << "\n------------------------------------------------\n"
                 << "Tarik Tunai\n"
                 << "------------------------------------------------\n";
            cout << "Silahkan masukkan uang yang ingin anda ambil :v : " ; cin >> tarik;
            if (tarik%50000!=0 || tarik<0){
                cout << "masukkan total uang dengan pecahan 50000\n";
                system("pause");
                system("cls");
                header();
                goto tarik;
            }
            else {
                if (tarik > saldo_awal){
                    cout << "Saldo anda tidak cukup \n";
                }
                else {
                saldo_awal -= tarik;
                cout << "------------------------------------------------\n";
                cout << "Silahkan hitung kembali uang yang telah anda ambil :v \n";
                cout << "Total saldo anda sekarang , " << saldo_awal << endl;
                cout << "------------------------------------------------\n";
                }
                system("pause");
                system("cls");
                header();
                goto menu;
            }
        break;
        case 2 :
            setor :
            cout << "\n------------------------------------------------\n"
                 << "Setor Tunai\n"
                 << "------------------------------------------------\n";
            cout << "Silahkan masukkan uang yang ingin anda tabung :v : " ; cin >> setor;
            if (setor%50000!=0 || setor<0){
                cout << "masukkan total uang dengan pecahan 50000\n";
                system("pause");
                system("cls");
                header();
                goto setor;
            }
            else {
                saldo_awal += setor;
                cout << "------------------------------------------------\n";
                cout << "Total saldo anda sekarang , " << saldo_awal << endl;
                cout << "------------------------------------------------\n";
                system("pause");
                system("cls");
                header();
                goto menu;
            }
        break;
        case 3 :
            cout << "\n------------------------------------------------\n"
                 << "Cek Saldo\n"
                 << "------------------------------------------------\n";
            cout << "Total saldo anda sekarang , " << saldo_awal << endl;
            cout << "------------------------------------------------\n";
            system("pause");
            system("cls");
            header();
            goto menu;
        break;
        case 4:
           penutup();
        break;
        default :
            cout << "\nKode yang anda pilih tidak ada , \npastikan kode yang anda masukkan benar\n";
            system("pause");
            system("cls");
            header();
            goto menu;
        break;
        }
    }
    else {
        cout << "\n------------------------------------------------\n";
        cout << "Pin yang anda masukkan salah\n" ;
        cout << "------------------------------------------------\n";
    }
}