#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    for (int i=0;i<3; i++) {
        for (int j=0; j<4; j++) {
            cout << c << "\t";
            c++;
        }
        cout << "\n";
    }

    int x =5;
    int y[5] = {1,2,5,6,4};
    char z[2] = {'A','F'};
    int a[2][3] = {{1,2,3},{7,5,6}};

    for(int i=0;i<5;i++) {
        cout << y[i] << " ";
    }
    cout << endl;
    cout << a[1][2];
    return 0;
}
