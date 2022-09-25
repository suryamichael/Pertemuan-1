#include <iostream>

using namespace std;

int main()
{
    float panjang, lebar, jari;
    int pilihan;
    float pi = 3.14;
    char ulang;

    do {
        cout << "RUMUS BANGUN DATAR!!!!!"<< endl;
        cout <<"----------------------"<< endl;
        cout <<"pilih rumus"<< endl;
        cout <<"1. Persegi Panjang"<< endl;
        cout <<"2. lingkaran"<< endl;
        cout << endl;

        cout << "PILIH RUMUS:" << endl;
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "masukkan Panjang:" << endl;
            cin >> panjang;
            cout << "masukkan Lebar" << endl;
            cin >> lebar;
            cout <<"Luas dari persegi panjang adalah:"<<panjang * lebar << endl;
            break;
        case 2:
            cout << "masukkan jari"<<endl;
            cin >> jari;
            cout <<"Luas dari Lingkaran adalah:"<<jari * jari * pi << endl;
            break;
        default:
            cout << "Apa kuwi?" << endl;
        }
        cout << endl;

        cout << "Ingin memilih rumus laen? (y/t)? ";
        cin >> ulang;
        cout << endl;
  }
    while (ulang!= 't');

    cout << "Dimengerti semnoga harimu menyenangkan!!!";

    cout << endl;
    return 0;
}
