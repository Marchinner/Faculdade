#include <iostream>
#include <locale.h>

using namespace std;

char Conceito(float nota1, float nota2) {
    char conceito;
    float media = 0;

    media = (nota1 + nota2) / 2;

    if(media >= 0 && media <= 4) {
        conceito = 'D';
    } else {
        if(media >= 5 && media < 7) {
            conceito = 'C';
        } else if(media >= 7 && media < 9) {
            conceito = 'B';
        } else {
            conceito = 'A';
        }
    }
    return conceito;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2;
    int continua = 0;

    do {
        cout << "Insira a nota 1: ";
        cin >> nota1;
        
        cout << "Insira a nota 2: ";
        cin >> nota2;

        if(nota1 < 0 || nota2 > 10) {
            cout << "Nota inválida! Insira novamente:" << endl;
            continua = 1;
        } else {
            continua = 0;
        }

    } while(continua == 1);

    cout << "O conceito do aluno é " << Conceito(nota1, nota2) << endl;

    return 0;
}
