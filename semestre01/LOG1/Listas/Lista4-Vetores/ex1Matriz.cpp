#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matriz[10][10]) {
    int linha, coluna;

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 10; coluna++) {
            cout << "Elemento [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }
}

int calculaMedia(int matriz[10][10], int media) {
    int somatoria = 0, elemento;

    media = 0;

    for(elemento = 0; elemento < 10; elemento++) {
        somatoria += matriz[elemento][elemento];
    }
    media = somatoria / 10;

    return media;
}

void mostraMedia(int media) {
    cout << "A média da diagonal principal da matriz 10x10 é igual à = " << media << endl;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[10][10], media;

    lerMatriz(matriz);

    media = calculaMedia(matriz, media);

    mostraMedia(media);

    return 0;
}
