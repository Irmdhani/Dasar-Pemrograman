#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int i = 0;
    int x;
    cout << "Program akan menjumlahkan dan menghitung banyaknya angka yang anda input jika menginputkan 9999" << endl;
    cout << endl;
    cout << "masukkan angka : ";
    cin >> x;

    while(x!=9999) {
        cout << x << endl;
        sum = sum + x;
        i = i + 1;
        cout << "masukkan angka : ";
        cin >> x;
    }
    cout << endl;
    cout << "jumlah angka yang anda inputkan adalah : " << sum << endl;
    cout << "banyaknya angka yang anda inputkan adalah : " << i << endl;

    return 0;
}
