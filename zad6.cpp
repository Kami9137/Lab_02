
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
    int n, liczba, suma = 0;
    srand(time(NULL));
    cout << "Podaj ilosc liczb do wylosowania: ", cin >> n;

    if (n > 0) {
        for (int i = 0; i < n; i++) {
            liczba = rand() % 56 - 10;
            cout << liczba <<" \n";
            if (liczba % 2 == 0)
                suma += liczba;
        }
    }
    else {
        cout << "Ilosc liczb do wylosowania nie moze byc <=0\n";
        cout << "Podaj ponownie n: ", cin >> n;
            for (int i = 0; i < n; i++) {
                liczba = rand() % 56 - 10;
                cout << liczba << " \n";
                if (liczba % 2 == 0)
                    suma += liczba;
            }
     }
    cout << "Suma liczb parzystych: " << suma << endl;
}
