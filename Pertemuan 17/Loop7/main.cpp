#include <iostream>

using namespace std;

int main()
{
    cout <<"Ada Hadiah bagi kalian yang tidak mengetik 9999!!!" << endl;
    int x, y, z;
    x = 1;
    z = 0;
    while (x > 0) {
        cout << "Input angka yang kamu inginkan:";
        cin >> y;
        if (y != 9999) {
                cout << y << endl;
            z = z+y;
        }else {
        cout << "Jumlah Angka:" << z << endl;
        break;
        }
    }

    cout << "Michael Surya" << endl;
    cout << "A11.2022.14124" << endl;
    return 0;
}
