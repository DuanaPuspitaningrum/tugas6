
#include <iostream>

using namespace std;

    const float phi = 3.14;
    float jari;
    float luas();
    float keliling();
    float tinggi;
    float volume();
    int main(){
    int pilih;
    char pilihan;
    do{
    cout << "Nama : Duana Puspitaningrum \nNIM  : 124200055 \nPRAKTIKUM ALGORITMA (tugas function)"<< endl ;
    cout << "    HITUNG LINGKARAN";
    cout << "\n=========================\n";
    cout << "1. Luas Lingkaran\n";
    cout << "2. Keliling Lingkaran\n";
    cout << "3. Volume Tabung\n";
    cout << "Pilih : "; cin >> pilih ;
    cout << endl ;
    switch (pilih)
        {
        case 1 :
            cout << "Jari-jari : " ; cin >> jari ;
            cout << endl ;
            cout << "Luas Lingkaran : " << luas() ;
        break;
        case 2 :
            cout << "Jari-jari : " ; cin >> jari ;
            cout << endl ;
            cout << "Keliling Lingkaran : " << keliling() ;
        break ;
        case 3 :
            cout << "Jari-jari : " ; cin >> jari ;
            cout << "Tinggi    : " ; cin >> tinggi ;
            cout << endl ;
            cout << "Volume Tabung: " << volume() ;
        break ;
        default :
            cout << "Pilihan Tidak Tersedia!" << endl ;
        }
        cout << "\nUlangi Program? (y/n) : "; cin >> pilihan;
        cout << endl ;
    }while (pilihan == 'Y' || pilihan == 'y' );
    }float luas() {
        float l = phi*jari*jari;
        return l;
    }float keliling() {
        float k = 2*phi*jari;
        return k;
    }float volume() {
        float v = phi*jari*jari*tinggi;
        return v;
    }



