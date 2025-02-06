#include <iostream>
#include <string>
using namespace std;

//5175. Dados de Fer

void generarCombinaciones(int D, int N, string actual) {
    if (actual.length() == N) {
        cout << actual << "\n";
        return;
    }
    for (int i = 1; i <= D; i++) {
        generarCombinaciones(D, N, actual + to_string(i));
    }
}

int main() {
    int D, N;
    cin >> D >> N;
    generarCombinaciones(D, N, "");
    return 0;
}
