#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Jangan mengetik angka 99!!!!" << endl;

    for (x = 1; x > 0; x++) {
        cout << "Masukkan Nilai angka:";
        cin >> y;
        if (y != -99) {
            continue;
        } else{
                cout << "Dibaca perintahnya ya :)" <<endl;
                break;
        }
    }




    cout << "Michael Surya" << endl;
    cout << "A11.2022.14124" << endl;
    return 0;
}
