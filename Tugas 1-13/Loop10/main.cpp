#include <iostream>

using namespace std;

int main()
{
    for (int x = 1; x <= 7; x++) {
        cout << "=== Baris ke -" << x  << " ==="<< endl;
        for (int y = 1; y <=10; y++){
            cout << "- angka "<< y << " -" << endl;
        }
    }
    return 0;
}
