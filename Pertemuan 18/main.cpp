#include <iostream>

using namespace std;

int main()
{
    /* for(int i = 0;i < 7; i++) {
    if (i == 2){
        continue;
    } if (i > 5) {
        break;
    }
    cout << i << endl;
    }

    for (int o = 0;o <= 1; o++) {
        cout << o << endl;
        for (int p = 0;p <= 1; p++) {
        cout << p << endl;
    }
    }
    */

    while (true)
    {
    cout << "" << endl;
    cout << "==== Daftar Menu Makanan ====" <<endl;
    cout << "" << endl;
    cout << "1. Nasi Kerikil" <<endl;
    cout << "2. Rica - Rica Bekicot" <<endl;
    cout << "3. Pepes Brotowali" <<endl;
    cout << "4. Kepiting Presto" <<endl;
    cout << "" << endl;


    int x;
    cout << "Pilih nomer menu makanan anda : " ;
    cin >> x;

    switch (x) {
        case 1:
            cout << "Anda Memilih Nasi Kerikil" <<endl;
            break;
        case 2:
            cout << "Anda Memilih Rica - Rica Bekicot" <<endl;
            break;
        case 3:
            cout << "Anda Memilih Pepes Brotowali" <<endl;
            break;
        case 4:
            cout << "Anda Memilih Kepiting Presto" <<endl;
            break;
        default:
            cout << "Maaf Menu Makanan tidak Ada" <<endl;
    }
    }
    return 0;
}
