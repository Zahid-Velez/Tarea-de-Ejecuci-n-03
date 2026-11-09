#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<string, 10> paises = {"Peru", "Bolivia"};

    paises.at(2) = "Brasil";
    paises.at(3) = "Chile";
    paises.at(4) = "Colombia";
    paises.at(5) = "Ecuador";
    paises[6] = "Argentina";
    paises[7] = "Uruguay";
    paises[8] = "Paraguay";
    paises[9] = "Venezuela";

    cout << "\n[a] Todos los paises:" << endl;
    for (const string& p : paises) {
        cout << p << " ";
    }
    cout << endl << endl;

    cout << "[b] Paises que incian con 'C' o 'P':" << endl;
    for (const string& p : paises) {
        if (!p.empty() && (p[0] == 'C' || p[0] == 'P' || p[0] == 'c' || p[0] == 'p')) {
            cout << p << " ";
        }
    }
    cout << endl << endl;

    cout << "[c] Primer y ultimo elemento:" << endl;
    cout << "Primer pais: " << paises.front() << endl;
    cout << "Ultimo pais: " << paises.back() << endl << endl;

    sort(paises.begin(), paises.end());
    cout << "[d] Paises ordenados alfabeticamente:" << endl;
    for (const string& p : paises) {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}