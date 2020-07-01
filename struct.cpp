#include <iostream>

using namespace std;

struct Calculadora {
    float n1;
    float n2;

    void somar(float stn1, float stn2) {
        n1 = stn1;
        n2 = stn2;
        float soma = n1 + n2;
        cout << "Soma: " << soma << "\n";
    }

    void subtrair(float stn1, float stn2) {
        n1 = stn1;
        n2 = stn2;
        float sub = n1 - n2;
        cout << "Subtracao: " << sub << "\n";
    }

    void multiplicar(float stn1, float stn2) {
        n1 = stn1;
        n2 = stn2;
        float mult = n1 * n2;
        cout << "Multiplicacao: " << mult << "\n";
    }

    void dividir(float stn1, float stn2) {
        n1 = stn1;
        n2 = stn2;
        float div = n1 / n2;
        cout << "Divisao: " << div << "\n";
    }

};

int main() {
    Calculadora cal;

    cal.somar(3.5, 2);
    cal.subtrair(5, 9);
    cal.multiplicar(2, 4);
    cal.dividir(4, 2);

    return 0;
}