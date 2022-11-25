#include <iostream>

using namespace std;

int main()
{
    cout << "Jangan mengetik Angka -99 V2!!!" << endl;
    int x, Max, Min, input;
    for (x = 1; x > 0; x++) {
        cout << "Masukkan Nilai Angka:";
        cin >> input;

        if (x == 1) {
            Max = input;
            Min = input;
        }
         else if ( input != -99) {
            if (input > Max) {
                Max = input;
            }
            if (input < Min) {
                Min = input;
            }
        }else {
            cout << "Nilai Max:" << Max << endl;
            cout << "Nilai Min:" << Min << endl;
            break;}
    }

    cout << "Michael Surya" << endl;
    cout << "A11.2022.14124" << endl;
    return 0;
}
