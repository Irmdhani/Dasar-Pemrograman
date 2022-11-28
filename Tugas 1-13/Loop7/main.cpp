#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x;
    cout << "Program akan menjumlahkan semua bilangan yang anda inputkan jika menginputkan 9999" << endl;
    cout << endl;
    cout << "masukkan angka : ";
    cin >> x;

    while(x!=9999) {
        cout << x << endl;
        sum = sum + x;
        cout << "masukkan angka : ";
        cin >> x;
    }
    cout << endl;
    cout << "jumlah angka yang anda inputkan adalah : " << sum << endl;
    return 0;
}
