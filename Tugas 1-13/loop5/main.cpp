#include <iostream>

using namespace std;

int main()
{
    while(true) {

    cout << "===== Program akan berhenti jika menginputkan angka -99 =====" << endl;

    while(true) {

    int c;
    cout << "Masukkan Nilai c : " ;
    cin >> c;
    if (c==-99) {
        cout << "\nkeluar karena break" << endl;
        break;
    }
    }
    break;
    }
    return 0;
}
