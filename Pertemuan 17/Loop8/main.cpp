#include <iostream>

using namespace std;

int main()
{
    cout <<"Ada Hadiah bagi kalian yang tidak mengetik 9999 V2!!!" << endl;
    int x, y;
    x = 0;
    while (x >= 0) {
        cout << "Input angka yang kamu inginkan:";
        cin >> y;
        if (y != 9999) {
                cout << y << endl;
        }else {
        cout << "Jumlah Angka cacah" << x << endl;
        break;
        }
            x++;
    }

    cout << "Michael Surya" << endl;
    cout << "A11.2022.14124" << endl;
    return 0;
}
