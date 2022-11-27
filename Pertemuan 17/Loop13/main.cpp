#include <iostream>

using namespace std;

int main()
{
    int x;
    float y, z;

    cout << "PROGRAM CONVERTER SUHU BESERTA KETERANGAN" << endl;
    cout << endl;
    cout << endl;

    cout << "===============================================" << endl;
    cout << "Celsius" << "        " << "Fahrenheit" << "          " << "Keterangan" << endl;
    cout << "===============================================" << endl;

    for ( x = -50; x <= 100; x++) {
            z = x;
        if ( z == -40) {
            y = (z * 9/5) + 32;
            cout << x << "              " << y << "              " << "Cuaca dingin sangat bersalju" << endl;
        } else if (z == -18) {
            y = (z * 9/5) + 32;
            cout << x << "            " << y << "          " << "Cuaca dingin bersalju" << endl;
        } else if (z == 0) {
            y = (z * 9/5) + 32;
            cout << x << "                " << y << "               " << "Titik beku air" << endl;
        } else if (z == 10) {
            y = (z * 9/5) + 32;
            cout << x << "               " << y << "               " << "Hari yang dingin" << endl;
        } else if (z == 21) {
            y = (z * 9/5) + 32;
            cout << x << "               " << y << "             " << "Temperatur Ruangan" << endl;
        } else if (z == 30) {
            y = (z * 9/5) + 32;
            cout << x << "               " << y << "               " << "Cuaca Pantai" << endl;
        } else if (z == 37) {
            y = (z * 9/5) + 32;
            cout << x << "               " << y << "             " << "Suhu Tubuh" << endl;
        } else if (z == 40) {
            y = (z * 9/5) + 32;
            cout << x << "               " << y << "              " << "Air mandi panas" << endl;
        } else if (z == 100) {
            y = (z * 9/5) + 32;
            cout << x << "              " << y << "              " << "Air mendidih" << endl;
        } else {continue;}

    }
    cout << endl;

        cout <<"Michael Surya" << endl;
        cout << "A11.2022.14124" << endl;
    return 0;
}
