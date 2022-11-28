#include <iostream>

using namespace std;

int main()
{
    float j;
    float r;
    for (int t = 1;t <= 20; t++){
        j += t;
        r = j/t;
        cout << t <<endl;
    }
    cout << endl;
    cout << "Jumlah = " << j <<endl;
    cout << "Rata - Rata = " << r <<endl;

    return 0;
}
