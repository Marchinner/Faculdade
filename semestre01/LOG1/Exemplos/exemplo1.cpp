#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matriz[5][2]) {
    int linha, coluna;

    for(linha = 0; linha < 5; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            cout << "Digite o elemento [" << linha << "] [" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    } 
}

void imprimirMatriz(int matriz[5][2]) {
    int linha, coluna;

    for(linha = 0; linha < 5; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            cout << matriz[linha][coluna];
        }
        cout << endl;
    } 
}

int produto(int matriz[5][2]) {
    int resultado = 1, linha, coluna;

    for(linha = 0; linha < 5; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            if(matriz[linha][coluna] != 0) {
                resultado *= matriz[linha][coluna];
            }
        }
    }

    return resultado;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[5][2], produtorio;

    lerMatriz(matriz);

    imprimirMatriz(matriz);

    produtorio = produto(matriz);

    cout << "O produto dos elementos diferentes de 0 na matriz é: " << produtorio << endl;
}
