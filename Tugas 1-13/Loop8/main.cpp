#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int x;
    cout << "Program akan menghitung banyaknya angka yang anda input jika menginputkan 9999" << endl;
    cout << endl;
    cout << "masukkan angka : ";
    cin >> x;

    while(x!=9999) {
        cout << x << endl;
        i = i + 1;
        cout << "masukkan angka : ";
        cin >> x;
    }
    cout << endl;
    cout << "banyaknya angka yang anda inputkan adalah : " << i << endl;
    return 0;
}
