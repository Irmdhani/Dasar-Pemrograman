#include <iostream>

using namespace std;

int main()
{
    cout << "Mencari angka Max & Min yang anda inputkan, dan berhenti jika memasukkan -99" <<endl;
    cout << endl;
    int angka, max, min;
    for(int range = 1;range > 0 ; range++){
        cout << "masukkan angka anda : ";
        cin >> angka;
        if (angka == -99){
            min != -99;
        }
        else if (range==1){
            max = angka;
            min = angka;
        }
        else if (min>angka) {
            min = angka;
        }
        else if (max<angka) {
            max = angka;
        }
        if (angka==-99){
        break;
     }
    }
    cout << "angka maksimal = " << max << endl;
    cout << "angka minimal = " << min << endl;
    return 0;
}
