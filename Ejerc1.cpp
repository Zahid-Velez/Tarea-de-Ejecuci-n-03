#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<int, 20> A = {
        21, 23, 25, 27, 29,
        51, 53, 55, 57, 59, 61, 63, 65, 67, 69,
        11, 13, 15, 17, 19
    };

    cout << "[a] Todos los elementos del grupo:" << endl;
    for (int x : A) {
        cout << x << " ";
    }
    cout << endl << endl;

    cout << "[b] Elementos mayores de 20 y menores de 50:" << endl;
    for (int x : A) {
        if (x > 20 && x < 50) {
            cout << x << " ";
        }
    }
    cout << endl << endl;

    sort(A.begin(), A.end());
    cout << "[c] Elementos del grupo ordenados (de menor a mayor):" << endl;
    for (int x : A) {
        cout << x << " ";
    }
    cout << endl << endl;

    cout << "[d] Elementos en índices impares menores de 10 (del arreglo actual ordenado):" << endl;
    for (size_t i = 1; i < 10; i += 2) {
        cout << "Índice " << i << ": " << A[i] << endl;
    }
    
    return 0;
}