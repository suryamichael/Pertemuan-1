#include <iostream>
using namespace std;

int main() {
    int x = 1, y = 1, xy = 0, z;
    cout << "Fibonacci :" << x << ", "<< y << ", ";
    xy = x + y;

    while (xy <= 100) {
        cout << xy << ", ";
        x = y;
        y = xy;
        xy = x + y;
    }
    return 0;
}
