#include <iostream>

using namespace std;

int soma(int n1, int n2);

void mostrarNomes(string nom[4]);

void contador(int num, int cont = 0);

int main() {
    int result;
    string nomes[4] = {"myka", "isa", "pinto", "vanny"};

    result = soma(2, 2);

    mostrarNomes(nomes);

    cout << "\nSoma: " << result << "\n";

    contador(5);

    return 0;
}

int soma(int n1, int n2) {
    return n1 + n2;
}

void mostrarNomes(string nom[4]) {
    for(int i = 0; i < 4; i++) {
        cout << "\n" << nom[i] << "\n";
    }
}

void contador(int num, int cont) {
    cout << "\n" << cont << "\n";
    if (num > cont) {
        contador(num, ++cont);
    }
}