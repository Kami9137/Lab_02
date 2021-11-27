
#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	float pkt, suma = 0;

	cout << "Podaj ilosc studentow: ", cin >> n;
		temp = n;

		while (1) {
			{
				cout << "Podaj liczbe punktow zdobytych przez studenta: \n", cin >> pkt;
				if (pkt >= 0 && pkt <= 100) {
					suma += pkt;
					n--;
				}
				else continue;
				if (n == 0) break;
			}
		}
		cout << "Suma punktow: " << suma << endl;
		cout << "Srednia arytmetyczna zdobytych punktow wynosi: " << suma / temp << endl;
	}