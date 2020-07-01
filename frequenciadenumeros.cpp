#include <iostream>

using namespace std;

int main() {
    int vetor[7] = {8, 10, 8, 260, 4, 10, 10};
    int i, z, x, n=0;

    for(i=0; i < 7; i++) {
        x = vetor[i];
        for(z=0; z < 7; z++) {
            if (vetor[z] == x) {
                n = n + 1;
            }
        }
        cout << vetor[i] << " aparece" << n << " vez(es)" << "\n";
        n = 0;
    }

    return 0;
}