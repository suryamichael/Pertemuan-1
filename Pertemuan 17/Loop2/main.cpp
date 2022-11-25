#include <iostream>

using namespace std;

int main()
{
    int x;

    for (x = 100; x > 0; x--) {
        if ( x % 2 == 1) {
            continue;
        } else {
            cout << "Nilai Genap adalah:" << x << endl;
        }
    }

    cout << "Michael Surya" << endl;
    cout << "A11.2022.14124" << endl;

    return 0;
}
