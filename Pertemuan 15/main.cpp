#include <iostream>

using namespace std;

int main()
{
    int x, y, z, b;
    b = 5000;
    cout << "Dito wants a candys!!!!" << endl;
    cout << "Tapi Uang yang ia miliki hanya sebanyak 5000 rupiah :(" << endl;
    cout << "Ayo bantu dia untuk menghitung berapa permen yang bisa dimiliki nya!!" << endl;
    cout << "(1) JIka harga permen 500 maka ia akan mengambil 5 permen saja" << endl;
    cout << "(2) Jika harga permen 1000 maka ia akan menghabis seluruh uang nya" << endl;
    cout << "(3) Jika harga permen 300 maka ia akan menghitungnya mulai dari 300, 600, 900, .... terus hingga uangnya habib" << endl;
    cout << "Mau pilih yang mana dulu??";
    cin >> x;
    cout << endl;

    switch (x) {
    case 1:
        z = 500 * 5;
        cout << "Udah keliatan di soal nya mah, kalo ia akan membeli sebanyak 5 permen dengan harga:" << z <<endl;
        break;
    case 2:
        y = 1000;
        z = b/y;
        cout << "Dengan harga 1000, Dito mampu membeli permen sebanyak:" << z;
        break;
    case 3:
        y = 0;
        z= 0;
        cout <<"Dito mulai menghitung jumlah permen yg bisa didapat:" << endl;
        while (y < 4700){
            z++;
            y+=300;
            cout << y;
            if (y < 4700) {
            cout <<", ";
            }
        } cout <<".";
        cout << endl;
        cout << "Dengan harga 300, Dito mampu membeli permen sebanyak:" <<z ;
        break;

        default:
        cout << "Yah Dito gagal membeli permennya, salah input sih:)";
    }

    return 0;
}
