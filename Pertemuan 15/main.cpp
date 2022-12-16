#include <iostream>

using namespace std;

int main()
{
    for(int y=20;y<=35;y++) {
        if(y%2==1)
        cout << y << endl;
    }

    int x;
    int hasil=1;
    cout << "masukkan nilai untuk difaktorkan : " ;
    cin >> x;

    for (int i=x;i>0;i--) {
       hasil=hasil*i;
    }
    cout << hasil << endl;

    return 0;
}
