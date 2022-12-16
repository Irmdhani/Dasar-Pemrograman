#include <iostream>

using namespace std;

int main()
{

/*
    int jam;
    int menit;
    int detik;

    cout << "Masukkan detik yang akan di konversi : " ;
    cin >> detik;
    jam = detik / 3600;
    detik = detik - (3600*jam);
    menit = detik / 60;
    detik = detik - (60*menit);

    cout << "Jam = " << jam << endl;
    cout << "menit = " << menit << endl;
    cout << "detik = " << detik << endl;
*/

    int a;
    int b;
    int c;

    cin >> a >> b >> c;
    if (a>b && a>c) {
        cout << "nilai max = " << a << endl;
    } else if (b>a && b>c) {
        cout << "nilai max = " << b << endl;
    } else if (c>b && c>a) {
        cout << "nilai max = " << c << endl;
    }

    /*
    c=a;
    a=b;
    b=c;
    cout << a << " , " <<b;
*/
    return 0;
}
