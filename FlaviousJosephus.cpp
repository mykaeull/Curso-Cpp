#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int n, k=2;
    bool acabou = false;

    n=k-1;

    while (acabou == false) {
        for(int i=0; i<(sizeof(vetor)/4); i++) {
            if (vetor[i] != 0) {
                if (n > (sizeof(vetor)/4)) {
                    n = n - (sizeof(vetor)/4);
                }
                vetor[n] = 0;
                n += 1;
            }

        }
        

    }

    return 0;
}