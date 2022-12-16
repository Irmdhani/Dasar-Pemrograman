#include <iostream>

using namespace std;

int main()
{
    /*for(int i=1; i<4; i++){
        for (int j=0; j<2; j++) {
            cout << i ;
        }
    }
    int a,b;
    for(a = 1, b = 100; a<100, b>1; a++, b--){
        cout << "a = " << a << " b = " << b << endl;
    }
    */

    for(int i=1;i<=50; i++) {
        int j =i*2;
        cout << i << " --> " << j << endl;
    }

    while(true){
    int x;
    cout << "masukkan x : ";
    cin >> x;
    cout << "kelipatan 2 = " << x*2;
    cout << endl;

    }

    return 0;
}
