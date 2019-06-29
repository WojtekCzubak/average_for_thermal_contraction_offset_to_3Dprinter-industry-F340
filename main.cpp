#include <iostream>

using namespace std;

int main()
{

    int swapHolder = -1;
    int end = 5;
    int length = 5;
    int x [5];


    cout << "Wpisz wyniki pomiarow dla X: " << endl;

    for (int i=0; i<5; i++)
    {
        cin >> x[i];
    }

    cout << endl;
    cout << "ponizej wypisujemy wszystko co wpisal uzytkownik" << endl;

    for (int i=0; i<5; i++)
    {
        cout << x[i] << endl;
    }

    cout << endl;
    cout << "teraz sortowanie ..." << endl;

    for (int counter = length - 1; counter > 0; counter --)
    {

        for (int i=0; i<end; i++)
        {
            if (x[i] > x[i+1])
            {
                swapHolder = x[i + 1];
                x[i +1] = x[i];
                x[i] = swapHolder;
            }
        }

        for (int i = 0; i <5; i++)
        {
            cout << x[i] << ", ";
        }
        cout << endl;
        end --;
    }

    return 0;
}
