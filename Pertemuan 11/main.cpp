#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i < 2; i++)
    {
        cout << i << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << j << endl;
        }
    }

    cout << "-----------" << endl;

    for (int i = 1; i <= 100; i++)
    {

        bool isEven = i % 2 == 0;

        bool isOdd = !isEven;

        bool isMultipleOfSix = i % 6 == 0;

        /**
         * Tinggal ditukar kondisinya
         */
        if (isMultipleOfSix)
        {
            cout << i << endl;
        }
    }

    /**
     * Cara alternatif
     */
    cout << "\n\nCARA ALTERNATIF:\n" << endl;
    int awal = 6;
    int beda = 6;
    int batas = 100;
    for (int i = awal; i <= batas; i += beda)
    {
        cout << i << endl;
    }

    return 0;
}
