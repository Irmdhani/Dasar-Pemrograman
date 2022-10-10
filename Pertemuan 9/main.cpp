#include <iostream>

using namespace std;

int main()
{

    int hari;
    int bulan;
    cout << "Masukkan Tanggal : " ;
    cin >> hari;
    cout << "Masukkan Bulan : " ;
    cin >> bulan;
    if (hari <= 31 && hari > 0 && (bulan%2==1&&bulan<8) || (bulan%2==0&&bulan>7&&bulan<13) )
        cout << "Tanggal Valid" << endl;
    else if (hari <= 30 && hari > 0 && (bulan%2==0&&bulan<8&&bulan>2) || (bulan%2==1&&bulan>8&&bulan<12) )
        cout << "Tanggal Valid" << endl;
    else if (hari <= 28 && hari >0 && bulan==2)
        cout << "Tanggal Valid" << endl;
    else
        cout << "Tanggal tidak Valid" <<endl;


    return 0;
}
