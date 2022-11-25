#include <iostream>

using namespace std;

int main()
{
    cout <<"Ada Hadiah bagi kalian yang tidak mengetik 9999 v3!!!" << endl;
    int x, y, z;
    z = 0;
    x = 0;
    while (x >= 0) {
        cout << "Input angka yang kamu inginkan:";
        cin >> y;
        if (y != 9999) {
                cout << y << endl;
                z = z + y;
        }else {
        cout << "Jumlah Angka cacah: " << x << endl;
        cout << "Jumlah Angka: " << z << endl;
        break;
        }
            x++;
    }

    cout << "Michael Surya" << endl;
    cout << "A11.2022.14124" << endl;
    return 0;
}
