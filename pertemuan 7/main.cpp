#include <iostream>

using namespace std;

int main()
{
    cout << "=============Daftar jurusan===========" << endl;
    cout << "\n";
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem informaasi" << endl;
    cout << "3. Desain komunikasi Visual" << endl;
    cout << endl;

    int pilih, x;
    cout << "Kamu masuk jurusan mana ? (ketik nomornya saja)" << endl;
    cout << "Masukkan Jurusan:";
    cin >> pilih;
    cout << "\n";
     switch (pilih) {
        case 1:
            cout << "Kamu adalah mahasiswa Teknik informatika" << endl;
            break;
        case 2:
            cout << "Kamu adalah mahasiswa Sistem informasi" << endl;
            break;
        case 3:
            cout << "Kamu adalah mahasiswa Desain Komunikasi visual" << endl;
            break;
        default:
            cout << "maaf kamu memasukkan input yang salah" << endl;
    }     cout << endl;

    cout << "Sekarang kamu udah kuliah berapa lama? (0-10)" << endl;
    cout << "Masukkan Semester:";
    cin >> x;
    cout << "\n";

    if (x == 0) {
        cout << "Lawag beliau satu ini, udah kuliah belum? " << endl;
    }
    if (x == 1 || x == 2) {
        cout << "Kamu adalah mahasiswa Freshman" << endl;
    }
    if (x == 3 || x == 4) {
        cout << "Kamu adalah mahasiswa Sophomore" << endl;
    }
    if (x == 5 || x == 6) {
        cout << "Kamu adalah mahasiswa Junior" << endl;
    }
    if (x == 7 || x == 8) {
        cout << "Kamu adalah mahasiswa Senior" << endl;
    }
    if (x >= 9) {
        cout << "Apakah kamu sangat mencintai Udinus?" << endl;
    }
    return 0;
}
