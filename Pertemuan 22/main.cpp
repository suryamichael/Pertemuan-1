#include <iostream>

using namespace std;

int main()
{
    int Union[3][2][2], angka, div;
    div = 0;
    float avg, sum;
    angka = 2;
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 2; b++){
            for (int c = 0; c < 2; c++) {
                Union[a][b][c] = angka;
                angka += 2;
                cout << Union[a][b][c] << " ";

                if (Union[a][b][c] % 4 == 0) {
                        sum += Union[a][b][c];
                        div++;
                }
            }cout << endl;
        }cout << endl;
    }
    avg = sum / div;
    cout << "Total kelipatan angka 4: " << div << endl ;
    cout << "SUM kelipatan 4:   " << sum << "|    AVG:   \n\n\n" << avg;
    cout << "Nama: Michael Surya" << endl;
    cout << "NIM : A11.2022.14124" << endl;
    return 0;
}
