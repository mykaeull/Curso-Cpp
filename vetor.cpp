#include <iostream>
#include <string>

using namespace std;

int main() {

    string a = "Hello World";

    int vetor[5];

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;

    for (int i = 0; i < sizeof(vetor)/4; i++) {
        cout << vetor[i] << "\n";
    }
    
    cout << a;

    return 0;
}