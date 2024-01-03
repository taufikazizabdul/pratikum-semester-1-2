#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
using namespace std;
main()
{
                int saldo;
                long int nom_tabung, nom_ambil, pin, pilih_menu;
                string nama, alamat;
                char iya;
               
                awal:
                system("cls");
                cout<<"============================================================="<<endl;
                cout<<"|            Selamat Datang Di Bank Mad Arief               |"<<endl;
                cout<<"|===========================================================|"<<endl;
                cout<<"|Silahkan Pilih Menu Di Bawah Ini Untuk Melakukan Transaksi |"<<endl;
                cout<<"|===========================================================|"<<endl;
                cout<<"|1. Tekan (1) Mendaftarkan Diri Sebagai Nasabah             |"<<endl;
                cout<<"|2. Tekan (2) Menabung                                      |"<<endl;
                cout<<"|3. Tekan (3) Melakukan Penarikan                           |"<<endl;
                cout<<"|4. Tekan (4) Cek Saldo                                     |"<<endl;
                cout<<"============================================================="<<endl;
                cout<<" Masukan Pilihan Anda : "; cin>>pilih_menu;
                switch(pilih_menu)
                {
 case 1:
                {
                                 system("cls");                                   cout<<"============================================================="<<endl;
                cout<<"|      Mendaftarkan Diri Sebagai Nasabah Bank Mad Arief     |"<<endl;
                cout<<"============================================================="<<endl;
                cout<<" Saldo Awal Minimal Rp.100.000,00"<<endl;
                cout<<" Masukan Nama Anda   : "; cin>>nama;
                cout<<" Masukan Alamat Anda : "; cin>>alamat;
                cout<<" Input Nominal       : "; cin>>saldo;
                                if (saldo>100000)
                                {                                                              cout<<"============================================================="<<endl;
                cout<<"|                     Bank Mad Arief                        |"<<endl;
                cout<<"============================================================="<<endl;
                cout<<"  "<<nama<<endl;
                cout<<"  "<<alamat<<endl;
                cout<<"  Saldo Rekening Anda Rp."<<saldo<<endl;;
                cout<<"============================================================="<<endl;
                cout<<endl;
                cout<<"Transaksi Lainnya (Y/T)"; cin>>iya;
                                                if(iya=='Y'||'y')
                                                {
                                                 goto awal;
                                                }
                                                else if(iya=='T'||'t')
                                                {
                                                 goto akhir;
                                                }             
                                                }
                                else
                                {
                                cout<<" Maaf Nominal Yang Anda Inputkan Tidak Memenuhi Syarat"<<endl;
                                cout<<" Transaksi Lainnya (Y/T)"; cin>>iya;
                                                if(iya=='Y'||'y')
                                                {
                                                goto awal;
                                                }
                                                else if(iya=='T'||'t')
                                                {
                                                goto akhir;
                                                }
                                }
                                break;
                }
                case 2:
                 {
                system("cls");                                                    cout<<"============================================================="<<endl;
                cout<<"                         Menabung                            "<<endl;
                cout<<"============================================================="<<endl;
                                if(saldo<100000)
                                {
                                cout<<" Maaf Anda Belum Terdaftar Di Bank Mad Arief"<<endl;
                                cout<<endl;
                                cout<<" Transaksi Lainnya (Y/T)"; cin>>iya;
                                                if(iya=='Y'||'y')
                                                {
                                                goto awal;
                                                }
                                                else if(iya=='T'||'t')
                                                {
                                                goto akhir;
                                                }
                                }
                                else
                                {
                                cout<<" Masukan Nominal Yang Akan Anda Simpan : Rp."; cin>>nom_tabung;
                                saldo=saldo+nom_tabung;
                                cout<<endl;
                                cout<<" Saldo Rekening Anda Sekarang Adalah   : Rp."<<saldo<<endl;;
                                cout<<" Transaksi Lainnya (Y/T)"; cin>>iya;
                                                if(iya=='Y'||'y')
                                                {
                                                goto awal;
                                                }
                                                else if(iya=='T'|'t')
                                                {
                                                goto akhir;
                                                }
                                }
                                break;
                }
                case 3:
                {
                system("cls");
                cout<<"============================================================="<<endl;
                cout<<"                         Penarikan                           "<<endl;
                cout<<"============================================================="<<endl;
                                if(saldo<100000)
                                {
                                cout<<" Maaf Anda Belum Terdaftar Di Bank Mad Arief"<<endl;
                                cout<<endl;
                                cout<<" Transaksi Lainnya (Y/T)"; cin>>iya;
                                                if(iya=='Y' || 'y')
                                                {
                                                goto awal;
                                                }
                                                else if(iya=='T'||'t')
                                                {
                                                goto akhir;
                                                }
                                }
                                else
                                {
                                cout<<" Masukan Nominal Yang Akan Anda Ambil   : Rp."; cin>>nom_ambil;
                                saldo=saldo-nom_ambil;
                                cout<<" Saldo Rekening Anda Sekarang Adalah    : Rp."<<saldo<<endl;
                                cout<<" Transaksi Lainnya (Y/T)"; cin>>iya;
                                                if(iya=='Y'||'y')
                                                {
                                                goto awal;
                                                }
                                                else if(iya=='T'||'t')
                                                {
                                                goto akhir;
                                                }
                                }
                                break;
                }
                case 4:
                {
                system("cls");                    cout<<"============================================================="<<endl;
                cout<<"                         Cek Saldo                           "<<endl;
                cout<<"============================================================="<<endl;
                cout<<" Saldo Rekening Anda Saat Ini Adalah : Rp."<<saldo<<endl;
                cout<<endl;
                                cout<<" Transaksi Lainnya (Y/T)"; cin>>iya;
                                                if(iya=='Y' || 'y')
                                                {
                                                goto awal;
                                                }
                                                else if(iya=='T'||'t')
                                                {
                                                goto awal;
                                                }
                                break;
                  }
                   default: cout<<" Exit"<<endl;
}
akhir: cout<<" Keluar"<<endl;
return 0;
}