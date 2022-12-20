#include <iostream>

using namespace std;

int main()
{

    int c[5] = {2,3,4,7,5};
    int d[5] = {4,5,6,3,2};
    int maks;
    for (int i=0;i<5;i++) {
        if (c[i]>maks) {
            maks = c[i];
        }
    }
    cout << maks << endl;

    int f=5;
    int hasil=1;
    for (int g=f;g>0;g--) {
        hasil=hasil*g;
    }
    cout << hasil<<endl;
    /*
    int a;
    cin >> a;
    for (int b=1;b<a;b++) {
        if (a % b == 0) {
            cout << b <<"  ";
        }
    }

    for (int z=0;z<5;z++) {
        cout << x[z] + y[4-z];
    }
    */

    int x, y, z, a;
    cout << "masukkan bil 1 ";
    cin >> x;
    cout << "masukkan bil 2 ";
    cin >> y;
    cout << "faktornya adalah = ";
    for (z=1;z<=x;z++) {
        if (x%z==0 && y%z==0) {
            a=z;
            cout << z << " ";
        }
    }
    cout << "\nFPB = " << a;
 return 0;
}
