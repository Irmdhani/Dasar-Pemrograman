#include <iostream>

using namespace std;

int main()
{
    /*
    int b[3];
    b[0] = 7;
    b[1] = 8;
    int c[5];
    for (int i=0; i<5; i++) {
        cin >> c[i];
    }
    for (int i=4; i>=0; i--) {
        cout << c[i] << " ";
    }

    int i;
    cout << "input array : " ;
    cin >> i;
    int c[i];
    float j = 0;
    float k;
    for (int u=0; u<i; u++) {
        cin >> c[u];
    }
    for (int u=0; u<i; u++) {
        cout << c[u] << " " ;
        j += c[u];
    }
    cout << endl;
    cout <<"jumlah = " << j << endl;
    k = j/i;
    cout << "Rata - Rata = " << k << endl;
    */

    char huruf[5] = {'A','B','C','D','E'};
    char x;
    bool found = false;

        cout << "Masukkan yang Dicari : ";
        cin >> x;
        for (int i =0; i<5; i++) {
            if (huruf[i] == x) {
               found = true;
               break;
            } else {
                found = false;
            }
        }
        if (found) {
            cout << "true\n" ;
        } else {
            cout << "false\n" ;
        }
    return 0;
}
