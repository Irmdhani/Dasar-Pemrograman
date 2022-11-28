#include <iostream>

using namespace std;

int main()
{
    cout << "---------------------------------" << endl;
    cout << "Celcius                Fahrenheit" << endl;
    cout << "---------------------------------" << endl;

    float f;
        for (float c=0;c<=100; c++){
            f = c*9/5+32;
            cout <<"  " << c << "     \t|       " << f  << endl;
        }


    return 0;
}
