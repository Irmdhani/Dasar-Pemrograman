#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "----------------------------------------------------" << endl;
    cout << "Celcius           Fahrenheit              Keterangan" << endl;
    cout << "----------------------------------------------------" << endl;


    for (int range = 1; range > 0; range++){
    float c;
    cin >> c;
    float f = c * 9/5 + 32;
    string keterangan;
    if (c <= 100 && c>40)
        keterangan = "air mendidih";
    else if (c <= 40 && c>30)
        keterangan = "air mandi panas";
    else if (c <= 30 && c>21)
        keterangan = "cuaca pantai";
    else if (c <= 21 && c>10)
        keterangan = "Temperatur ruangan";
    else if (c <= 10 && c>0)
        keterangan = "Hari yang dingin";
    else if (c <= 0 && c>-18)
        keterangan = "Titik beku air";
    else if (c <= -18 && c>-40)
        keterangan = "Cuaca dingin bersalju";
    else if (c <= -40)
        keterangan = "Cuaca sangat dingin bersalju";


    cout << "     \t  |\t   " << f << "       \t|\t" << keterangan  << endl;
    }
    cout << "----------------------------------" << endl;
    return 0;
}
