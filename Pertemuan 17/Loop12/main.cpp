#include <iostream>

using namespace std;

int main()
{
    int x;
    float y, z;
    cout <<"Tabel Konversi suhu dari celsius ke fahrenheit"<< endl;
    cout <<"=============================================="<< endl;
    cout << "Celsius" << "                            " << "Fahrenheit" << endl;
    cout <<"=============================================="<< endl;

    for (x = 0; x < 100; x++) {
        z++;
        y =  (z*9/5) + 32;
        cout << z << "                                    " << y << endl;
    }

    cout << "Michael Surya" << endl;
    cout << "A11.2022.14124" << endl;
    return 0;
}
