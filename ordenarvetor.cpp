#include <iostream>

using namespace std;

int main() {
    int vetor[6] = {12, 10, 14, 13, 20, 9};
    int i, j, x, y;
    int z=1;

    for(i=0; i < ((sizeof(vetor)/4)-1); i++) {
        for(j=z; j < (sizeof(vetor)/4); j++) {
            if (vetor[i] <= vetor[j]) {
                y = vetor[i];
                vetor[i] = y;
            }
            else if (vetor[i] > vetor[j]) {
                x = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = x;
            }
        }
        z+=1;
    }

    for(i=0; i < (sizeof(vetor)/4); i++) {
        cout << vetor[i] << "\n";
    }

    return 0;
}