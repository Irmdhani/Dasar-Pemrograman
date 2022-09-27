#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "Rumus Luas Permukaan dan Volume Balok" << endl;
    float x, y, z, luas, volume;
    cout << "Masukkan Panjang : ";
    cin >> x;
    cout << "Masukkan Lebar : ";
    cin >> y;
    cout << "Masukkan Tinggi : ";
    cin >> z;
    luas = (2*x*y)+(2*x*z)+(2*y*z);
    volume = x*y*z;
    cout << "==========================" << endl;
    cout << "Luas Permukaan Balok = " <<luas<<endl;
    cout << "Volume Balok = " <<volume<<endl;

    cout << "" << endl;
    cout << "Rumus Luas Permukaan dan Volume Kubus" << endl;
    float a, b, c;
    cout << "Masukkan Sisi : ";
    cin >> a;
    b = 6*a*a;
    c = a*a*a;
    cout << "==========================" << endl;
    cout << "Luas Permukaan Kubus = " <<b<<endl;
    cout << "Volume Kubus = " <<c<<endl;

    return 0;
}
