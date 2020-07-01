#include <iostream>
#include <string>

using namespace std;

int tam(char num[50]);

int main() {
    char n[30];
    int i = 0, numvezes = 0, vezes;

    cin >> vezes;

    while (vezes > 0) {
        cin >> n;

        for(i = 0; i < tam(n); i++) {
            if (n[i] != '0') {
                numvezes++;
            }
        }

        cout << numvezes << endl;

        for(i = 0; i < tam(n); i++) {
            if (n[i] != '0') {
                cout << n[i];
                for(int c = 1; c < tam(n) - i; c++) {
                    cout << "0";
                }
                cout << " ";    
            }
        }
        
        cout << "\n";
        vezes--;
        numvezes = 0;
    }
           
    return 0;
}

int tam(char num[50]) {
    int i = 0, lenght = 0;
    while (num[i] != '\0') {
        i++;
        lenght++;
    }
    return lenght;
}