#include <iostream>

using namespace std;

int main() {
    int tabuleiro[3][3] = {{1, 2, 2},
                           {1, 1, 2},
                           {2, 2, 1}};
    int i = 0;
    int j = 0;
    bool acabou = false;
    bool vazio = false;
    int vencedor = 0;

    //verifica as linhas
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 1; j++) {
            if ((tabuleiro[i][j] == tabuleiro[i][j+1])) {
                if ((tabuleiro[i][j+1] == tabuleiro[i][j+2])) {
                    if ((tabuleiro[i][j+2] != 0)) {
                        acabou = true;
                        vencedor = tabuleiro[i][j];
                    }                  
                }               
            } 
        }
    }

    //verifica as colulas
    if (acabou == false) {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 1; j++) {
                if ((tabuleiro[j][i] == tabuleiro[j+1][i])) {
                    if ((tabuleiro[j+1][i] == tabuleiro[j+2][i])) {
                        if ((tabuleiro[j+2][i] != 0)) {
                            acabou = true;
                            vencedor = tabuleiro[j][i]; 
                        }
                    }                    
                } 
            }
        }
    }

    //verifica as diagonais
    if (acabou == false) {
        for(i = 0; i < 1; i++) {
            for(j = 0; j < 1; j++) {
                if ((tabuleiro[i][j] == tabuleiro[i+1][j+1] == tabuleiro[i+2][j+2] != 0)) {
                    if ((tabuleiro[i+1][j+1] == tabuleiro[i+2][j+2])) {
                        if ((tabuleiro[i+2][j+2] != 0)) {
                            acabou = true;
                            vencedor = tabuleiro[i][j];
                        }
                    }                   
                } 
            }  
        }
    }

    //verifica se o jogo acabou - (vitória, derrota ou erro)
    if (acabou == true) {
        cout << "\n" << "Vencedor: " << vencedor << "\n";
    } else {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                if (tabuleiro[i][j] != 0) {
                    vazio = true;
                }
            }
        }
        if (vazio == true) {
            cout << "\n" << "Jogo empatou: deu velha." << "\n";
        } else {
            cout << "\n" << "[ERRO!]" << "\n";
        }
    }

    return 0;
}