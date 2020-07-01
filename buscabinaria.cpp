#include <iostream>

using namespace std;

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 3;
    int inicial = 0;
    int final = 9;
    int meio;
    int result = 0;
    bool encontrado = false;

    while((inicial <= final) && (encontrado == false)) {
        meio = ((inicial + final) / 2);
        if (vetor[meio] == n) {
            n = vetor[meio];
            encontrado = true;
        } else {
            if (vetor[meio] > n) {
            final = meio - 1;
            }
            else {
            inicial = meio + 1;
            }    
        }
    }

    cout << "\n" << "Resultado: " << n << "\n";


    return 0;
}