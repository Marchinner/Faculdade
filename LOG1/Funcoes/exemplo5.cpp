#include <iostream>
#include <locale.h>

using namespace std;

char VerificaPositivo(int numero) {
    if(numero >= 0) {
        return 'P';
    } else {
        return 'N';
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Digite um número para verificar se é positivo ou negativo: ";
    cin >> numero;

    if(VerificaPositivo(numero) == 'P') {
        cout << "O número é POSITIVO!" << endl;
    } else {
        cout << "O número é NEGATIVO!" << endl;
    }

    return 0;
}
