#include <iostream>

using namespace std;

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int vetor_invertido[(sizeof(vetor)/4)];
    int x, i;

    x = sizeof(vetor) / 4;

    for(i=0; i < (sizeof(vetor)/4); i++) {
        x = x - 1;
        vetor_invertido[i] = vetor[x];
    }

    for(i = 0; i < (sizeof(vetor)/4); i++) {
        vetor[i] = vetor_invertido[i];
    }

    for(i = 0; i < (sizeof(vetor)/4); i++) {
        cout << vetor[i] << "\n";
    }


    return 0;
}