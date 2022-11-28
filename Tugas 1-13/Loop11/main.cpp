#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Masukkan Angka : ";
    cin >> a;
        for (int b=1; b <=a; b++){
            cout << b << " x " << a << " = " << b*a << endl;
        }

    return 0;
}
