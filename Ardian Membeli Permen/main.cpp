#include <iostream>

using namespace std;

int main()
{
    int uang = 5000;
    int hargapermen, jumlah;
    cout << "Masukkan harga permen : ";
    cin >> hargapermen;

    if (hargapermen == 1000) {
        jumlah = 3;
        cout << "Ardian membeli " << jumlah << " permen" << endl;
    }
    else if (hargapermen == 500) {
        jumlah = uang / hargapermen;
        cout << "Ardian membeli " << jumlah << " permen" << endl;
    }
    else if (hargapermen == 300) {
        int total = 0;
        jumlah = uang / hargapermen;
        for (int i=0;i<=jumlah;i++){
             total += 300;
            cout << hargapermen*i <<endl;
        }
        cout << "\nArdian membeli " << jumlah << " permen" << endl;
    }
    else
        cout << "Harga permen tidak Valid" << endl;

return 0;
}
