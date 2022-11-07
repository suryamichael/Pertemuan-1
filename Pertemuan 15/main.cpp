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
    cout << "(3) Jika harga permen 300 maka ia akan menghabis seluruh uang nya" << endl;
    cout << "Mau pilih yang mana dulu??";
    cin >> x;

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
        y = 300;
        z = b/y;
        cout << "Dengan harha 300, Dito mampu membeli permen sebanyak:" << z;
        break;

        default:
        cout << "Yah Dito gagal membeli permennya, salah input sih:)";
    }

    return 0;
}
