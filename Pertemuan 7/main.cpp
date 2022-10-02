#include <iostream>

using namespace std;

int main()
{
    cout << "Bentuk Senyawa Berdasarkan Temperature" << endl;

    float x;
    cout << "Masukkan Temperatur dalam C : ";
    cin >> x;
    if (x <= 0)
    cout << "Senyawa Berupa Ice" << endl;
    else if (x > 100)
    cout << "Senyawa Berupa Gas" << endl;
    else
    cout << "Senyawa Berupa Liquid" << endl;


    /*MOHAMAD ILHAM RAMADHANI
    A11.2022.14587
    KELP. A11.4116
    DASPRO PERTEMUAN 7
    INPUT TEMPERATURE
    */

    return 0;
}
